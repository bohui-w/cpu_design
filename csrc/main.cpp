#include <Vtop.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "Vtop___024root.h"
#include "miniemu.h"

#define PMEM_BASE  0x80000000
#define PMEM_SIZE  (128 * 1024 * 1024)

static Vtop dut;
static uint8_t M[PMEM_SIZE];
static uint32_t uart_status = 0;
static uint32_t clock_lo = 0, clock_hi = 0;
static uint32_t inst_addr_delay = 0x80000000;
static uint32_t M_addr_delay = 0;

static unsigned long long cycle_count = 0;
static unsigned long long inst_count = 0;

static unsigned long long get_time() {
  return cycle_count / 473;
}

static uint32_t mem_read32(uint32_t addr) {
  if (addr == 0x10000004) {
    uart_status = (rand() & 0x7) == 0 ? 1 : 0;
    emu_set_uart_status(uart_status);
    return uart_status;
  }
  if (addr == 0x20000000) {
    clock_lo = (uint32_t)(get_time() & 0xffffffff);
    emu_set_rtc_lo(clock_lo);
    return clock_lo;
  }
  if (addr == 0x20000004) {
    clock_hi = (uint32_t)(get_time() >> 32);
    emu_set_rtc_hi(clock_hi);
    return clock_hi;
  }
  uint32_t off = addr - PMEM_BASE;
  if (off > PMEM_SIZE - 4) return 0;
  return (uint32_t)M[off]
    | ((uint32_t)M[off + 1] << 8)
    | ((uint32_t)M[off + 2] << 16)
    | ((uint32_t)M[off + 3] << 24);
}

static void mem_write32(uint32_t addr, uint32_t data) {
  if (addr == 0x10000000) {
    fputc(data & 0xff, stderr);
    return;
  }
  uint32_t off = addr - PMEM_BASE;
  if (off > PMEM_SIZE - 4) return;
  M[off]   = (data >>  0) & 0xFF;
  M[off+1] = (data >>  8) & 0xFF;
  M[off+2] = (data >> 16) & 0xFF;
  M[off+3] = (data >> 24) & 0xFF;
}

static void mem_write8(uint32_t addr, uint8_t data) {
  if (addr == 0x10000000) {
    fputc(data & 0xff, stderr);
    return;
  }
  uint32_t off = addr - PMEM_BASE;
  if (off >= PMEM_SIZE) return;
  M[off] = data;
}

static void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.inst = mem_read32(inst_addr_delay);
  inst_addr_delay = dut.inst_addr;
  uint32_t ma = M_addr_delay;
  dut.M_rdata32 = mem_read32(ma);
  uint32_t ma_off = ma - PMEM_BASE;
  if (ma == 0x10000004) {
    dut.M_rdata8 = uart_status & 0xFF;
  } else if (ma == 0x20000000) {
    dut.M_rdata8 = (uint8_t)(clock_lo & 0xFF);
  } else if (ma == 0x20000004) {
    dut.M_rdata8 = (uint8_t)(clock_hi & 0xFF);
  } else {
    dut.M_rdata8 = (ma_off < PMEM_SIZE) ? M[ma_off] : 0;
  }
  dut.eval();
  if (dut.M_w_en) {
    uint32_t wa = dut.M_addr;
    if (wa == 0x10000000) {
      fputc(dut.M_wdata8 & 0xFF, stderr);
    } else if (dut.M_op) {
      mem_write32(wa, dut.M_wdata32);
    } else {
      mem_write8(wa, dut.M_wdata8);
    }
  }
  M_addr_delay = dut.M_addr;
  dut.clk = 1; dut.eval();
  cycle_count++;
}

static void load_program(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) { perror("fopen"); exit(1); }
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (size > (long)sizeof(M)) {
        fprintf(stderr, "program too large: %ld bytes\n", size);
        fclose(fp);
        exit(1);
    }
    if (fread(M, 1, size, fp) != (size_t)size) {
        perror("fread");
        fclose(fp);
        exit(1);
    }
    fclose(fp);
    printf("loaded %ld bytes from %s\n", size, filename);
    emu_init();
    emu_load_program(M, (int)size);
}

int diff() {
  for (int i = 0; i < 32; i++) {
    uint32_t dut_reg = dut.rootp->top__DOT__u_gpr__DOT__reg_file[i];
    uint32_t emu_reg = emu_get_reg(i);
    if (dut_reg != emu_reg) {
      printf("DIFF! x%d: DUT=0x%X EMU=0x%X\n", i, dut_reg, emu_reg);
      return 1;
    }
  }
  return 0;
}

static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <program.bin>\n", argv[0]);
    return 1;
  }

  const char *filename = argv[1];
  memset(M, 0, sizeof(M));
  load_program(filename);

  reset(10);

  while(1) {
    bool will_execute = dut.ifu_done;
    single_cycle();
    if (will_execute) {
      inst_count++;
      emu_cycle();
      if (diff() != 0) return 1;
    }

    if (emu_is_ebreak()) {
      printf("inst_count  = %llu\n", inst_count);
      printf("cycle_count = %llu\n", cycle_count);
      printf("IPC         = %.4f\n", (double)inst_count / (double)cycle_count);
      uint32_t code = emu_get_exit_code();
      if (code == 0) {
        printf("HIT GOOD TRAP\n");
        return 0;
      } else {
        printf("HIT BAD TRAP\n");
        return 1;
      }
    }
  }
  return 0;
}