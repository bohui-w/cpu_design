#include <nvboard.h>
#include <Vtop.h>
#include "Vtop___024root.h"
#include <array>
#include "semu.h"
#include <stdio.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* top);

static void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

static void get_dut_regs(uint8_t regs[4]) {
    regs[0] = dut.rootp->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__0__KET____DOT__u_reg__dout;
    regs[1] = dut.rootp->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__u_reg__dout;
    regs[2] = dut.rootp->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__u_reg__dout;
    regs[3] = dut.rootp->top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__u_reg__dout;
}

static void get_ref_regs(uint8_t regs[4]) {
    for (int i = 0; i < 4; i++) {
        regs[i] = emu_get_reg(i);
    }
}

static int diff_check(uint8_t dut_regs[4], uint8_t ref_regs[4]) {
    printf("DUT: R[0]=%3d R[1]=%3d R[2]=%3d R[3]=%3d | REF: R[0]=%3d R[1]=%3d R[2]=%3d R[3]=%3d\n",
      dut_regs[0], dut_regs[1], dut_regs[2], dut_regs[3],
      ref_regs[0], ref_regs[1], ref_regs[2], ref_regs[3]);
    for (int i = 0; i < 4; i++) {
        if (dut_regs[i] != ref_regs[i]) {
            printf("DIFF! R[%d]: DUT=%d REF=%d\n", i, dut_regs[i], ref_regs[i]);
            return -1;
        }
    }
    return 0;
}

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();
  uint8_t program[] = {
    0x60, 0x80, 0x90, 0xb1, 0x03, 0x14, 0x48, 0xf6,
    0x80, 0x71, 0xcb, 0xfa, 0x59, 0xc2
  };
  emu_init();
  emu_load(program, sizeof(program));
  uint8_t dut_regs[4];
  uint8_t ref_regs[4];

  dut.io_in0 = 10;
  dut.io_in1 = 0;
  reset(10);
  while(1) {
    nvboard_update();
    //single_cycle();

    emu_set_input(0, (uint8_t)dut.io_in0);
    emu_set_input(1, (uint8_t)dut.io_in1);
    emu_step();  // emu step
    single_cycle();  // dut step

    get_dut_regs(dut_regs);
    get_ref_regs(ref_regs);
    if (diff_check(dut_regs, ref_regs) != 0) {
      printf("DiffTest failed\n");
      break;
    }
  }
}
