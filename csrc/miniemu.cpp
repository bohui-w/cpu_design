#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "miniemu.h"

#define BITS(x, h, l)  (((x) >> (l)) & ((1 << ((h) - (l) + 1)) - 1))
#define BITS_S(x, h, l)  (((int32_t)((x) << (31 - (h)))) >> ((31 - (h)) + (l)))
#define INST_CONCAT(s0, s1, s2, s3) (((uint32_t)s3 << 24) | ((uint32_t)s2 << 16) | ((uint32_t)s1 << 8) | (uint32_t)s0)

static uint32_t rtc_lo_sync = 0;
static uint32_t rtc_hi_sync = 0;

void emu_set_rtc_lo(uint32_t val) { rtc_lo_sync = val; }
void emu_set_rtc_hi(uint32_t val) { rtc_hi_sync = val; }

uint8_t M[128 * 1024 * 1024] = {0};
uint32_t regs[32] = {0};
uint32_t pc = 0x80000000;
uint32_t next_pc = 0;
uint32_t inst = 0;
uint32_t uart_status_sync = 0;
int ebreak_flag = 0;

bool is_addi(uint32_t inst) {
    return (BITS(inst, 6, 0) == 19) && (BITS(inst, 14, 12) == 0);
}

bool is_jalr(uint32_t inst) {
    return (BITS(inst, 6, 0) == 103) && (BITS(inst, 14, 12) == 0);
}

bool is_add(uint32_t inst) {
    return (BITS(inst, 6, 0) == 51) && (BITS(inst, 14, 12) == 0) && (BITS(inst, 31, 25) == 0);
}

bool is_lui(uint32_t inst) {
    return (BITS(inst, 6, 0) == 55);
}

bool is_lw(uint32_t inst) {
    return (BITS(inst, 6, 0) == 3) && (BITS(inst, 14, 12) == 2);
}

bool is_lbu(uint32_t inst) {
    return (BITS(inst, 6, 0) == 3) && (BITS(inst, 14, 12) == 4);
}

bool is_sw(uint32_t inst) {
    return (BITS(inst, 6, 0) == 35) && (BITS(inst, 14, 12) == 2);
}

bool is_sb(uint32_t inst) {
    return (BITS(inst, 6, 0) == 35) && (BITS(inst, 14, 12) == 0);
}

bool is_ebreak(uint32_t inst) {
    return (BITS(inst, 6, 0) == 115) && (BITS(inst, 14, 12) == 0) && (BITS(inst, 31, 20) == 1);
}

void emu_set_uart_status(uint32_t val) {
    uart_status_sync = val;
}

void emu_init(void) {
    memset(M, 0, sizeof(M));
    memset(regs, 0, sizeof(regs));
    pc = 0x80000000;
    ebreak_flag = 0;
}

void emu_load_program(const uint8_t* program, int len) {
    if (len > (int)sizeof(M)) len = sizeof(M);
    memcpy(M, program, len);
}

uint32_t emu_get_reg(int i) { return regs[i & 31]; }

uint32_t emu_get_pc(void)   { return pc; }

int emu_is_ebreak(void) { return ebreak_flag; }

uint32_t emu_get_exit_code(void) { return regs[10]; }

void emu_cycle() {
    uint32_t pc_off = pc - 0x80000000;
    inst = INST_CONCAT(M[pc_off], M[pc_off+1], M[pc_off+2], M[pc_off+3]);
    next_pc = pc + 4;
    
    if (is_addi(inst)) {
        regs[BITS(inst, 11, 7)] = regs[BITS(inst, 19, 15)] + BITS_S(inst, 31, 20);
    }
    else if (is_jalr(inst)) {
        next_pc = (regs[BITS(inst, 19, 15)] + BITS_S(inst, 31, 20)) & ~1;
        regs[BITS(inst, 11, 7)] = pc + 4;
    }
    else if (is_add(inst)) {
        regs[BITS(inst, 11, 7)] = regs[BITS(inst, 24, 20)] + regs[BITS(inst, 19, 15)];
    }
    else if (is_lui(inst)) {
        regs[BITS(inst, 11, 7)] = (uint32_t)BITS(inst, 31, 12) << 12;
    }
    else if (is_lw(inst)) {
        uint32_t addr = regs[BITS(inst, 19, 15)] + BITS_S(inst, 31, 20);
        if (addr == 0x20000000) {
            regs[BITS(inst, 11, 7)] = rtc_lo_sync;
        } else if (addr == 0x20000004) {
            regs[BITS(inst, 11, 7)] = rtc_hi_sync;
        } else if (addr >= 0x80000000) {
            uint32_t off = addr - 0x80000000;
            if (off < sizeof(M) - 4) {
                regs[BITS(inst, 11, 7)] = INST_CONCAT(M[off], M[off+1], M[off+2], M[off+3]);
            }
        }
    }
    else if (is_lbu(inst)) {
        uint32_t addr = regs[BITS(inst, 19, 15)] + BITS_S(inst, 31, 20);
        if (addr == 0x10000004) {
            regs[BITS(inst, 11, 7)] = uart_status_sync;
        } else if (addr == 0x20000000) {
            regs[BITS(inst, 11, 7)] = rtc_lo_sync & 0xFF;
        } else if (addr == 0x20000004) {
            regs[BITS(inst, 11, 7)] = rtc_hi_sync & 0xFF;
        } else if (addr >= 0x80000000) {
            uint32_t off = addr - 0x80000000;
            if (off < sizeof(M)) regs[BITS(inst, 11, 7)] = M[off];
        }
    }
    else if (is_sw(inst)) {
        uint32_t addr = ((uint32_t)BITS_S(inst, 31, 25) << 5) + BITS(inst, 11, 7) + regs[BITS(inst, 19, 15)];
        uint32_t src = regs[BITS(inst, 24, 20)];
        if (addr != 0x10000000) {
            uint32_t off = addr - 0x80000000;
            M[off]   = BITS(src, 7, 0);
            M[off+1] = BITS(src, 15, 8);
            M[off+2] = BITS(src, 23, 16);
            M[off+3] = BITS(src, 31, 24);
        }
    }
    else if (is_sb(inst)) {
        uint32_t addr = ((uint32_t)BITS_S(inst, 31, 25) << 5) + BITS(inst, 11, 7) + regs[BITS(inst, 19, 15)];
        uint32_t src = regs[BITS(inst, 24, 20)];
        if (addr != 0x10000000) {
            uint32_t off = addr - 0x80000000;
            M[off] = BITS(src, 7, 0);
        }
    }
    else if (is_ebreak(inst)) {
        ebreak_flag = 1;
    }
    else {
        ;
    }
    pc = next_pc;
    regs[0] = 0;
}
