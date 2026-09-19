#include <nvboard.h>
#include <Vtop.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static TOP_NAME dut;

static uint8_t M[1024 * 1024 + 16];

void nvboard_bind_all_pins(TOP_NAME* top);

static uint32_t mem_read32(uint32_t addr) {
    return (uint32_t)M[addr]
         | ((uint32_t)M[addr + 1] << 8)
         | ((uint32_t)M[addr + 2] << 16)
         | ((uint32_t)M[addr + 3] << 24);
}

static void mem_write32(uint32_t addr, uint32_t data) {
    M[addr]   = (data >>  0) & 0xFF;
    M[addr+1] = (data >>  8) & 0xFF;
    M[addr+2] = (data >> 16) & 0xFF;
    M[addr+3] = (data >> 24) & 0xFF;
}

static void mem_write8(uint32_t addr, uint8_t data) {
    M[addr] = data;
}

static void single_cycle() {
  dut.clk = 0; dut.eval();

  dut.inst = mem_read32(dut.inst_addr & 0xFFFFC);
  dut.eval();

  uint32_t ma = dut.M_addr & 0xFFFFC;
  dut.M_rdata32 = mem_read32(ma);
  dut.M_rdata8  = M[ma];
  dut.eval();

  dut.clk = 1; dut.eval();

  if (dut.M_w_en) {
    uint32_t wa = dut.M_addr & 0xFFFFF;
    if (dut.M_op) {
      mem_write32(wa, dut.M_wdata32);
    } else {
      mem_write8(wa, dut.M_wdata8);
    }
  }
}

static void load_program() {
  uint32_t program[] = {
    0x06400513,  // 0x00: addi a0, zero, 100
    0x0C800593,  // 0x04: addi a1, zero, 200
    0x00B50633,  // 0x08: add a2, a0, a1
    0x123455B7,  // 0x0c: lui a1, 0x12345
    0x10000713,  // 0x10: addi a4, zero, 0x100
    0x00C72023,  // 0x14: sw a2, 0(a4)
    0x00072783,  // 0x18: lw a5, 0(a4)
    0x05500513,  // 0x1c: addi a0, zero, 0x55
    0x00A70223,  // 0x20: sb a0, 4(a4)
    0x00474583,  // 0x24: lbu a1, 4(a4)
    0x02800067,  // 0x28: jalr  zero, 28(zero)
  };
  for (int i = 0; i < (int)(sizeof(program)/sizeof(program[0])); i++) {
    mem_write32(i * 4, program[i]);
  }
}

static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

int main() {
  memset(M, 0, sizeof(M));
  load_program();

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  reset(10);

  uint32_t pc_prev = dut.inst_addr;
  int same_count = 0;

  while(1) {
    nvboard_update();
    single_cycle();

    uint32_t pc_now = dut.inst_addr;

    if (pc_now == pc_prev) {
      same_count++;
    } else {
      same_count = 0;
    }
    pc_prev = pc_now;
    if (same_count >= 3) {
      printf("=== halt at pc=0x%02X ===\n", pc_now);
      printf("M[0x100]=0x%02X M[0x101]=0x%02X M[0x102]=0x%02X M[0x103]=0x%02X M[0x104]=0x%02X\n",
      M[0x100], M[0x101], M[0x102], M[0x103], M[0x104]);
      break;
    }
  }
}
