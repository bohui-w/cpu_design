#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define BITS(x, h, l)  (((x) >> (l)) & ((1 << ((h) - (l) + 1)) - 1))
#define BITS_S(x, h, l)  (((int32_t)((x) << (31 - (h)))) >> ((31 - (h)) + (l)))
#define INST_CONCAT(s0, s1, s2, s3) (((uint32_t)s3 << 24) | ((uint32_t)s2 << 16) | ((uint32_t)s1 << 8) | (uint32_t)s0)

uint8_t M[1024] = {
    0x13, 0x05, 0x40, 0x06,   // 0x00: addi a0, zero, 100
    0x93, 0x05, 0x80, 0x0C,   // 0x04: addi a1, zero, 200
    0x33, 0x06, 0xB5, 0x00,   // 0x08: add   a2, a0, a1
    0xB7, 0x56, 0x34, 0x12,   // 0x0c: lui   a3, 0x12345
    0x13, 0x07, 0x00, 0x10,   // 0x10: addi a4, zero, 0x100
    0x23, 0x20, 0xC7, 0x00,   // 0x14: sw    a2, 0(a4)
    0x83, 0x27, 0x07, 0x00,   // 0x18: lw    a5, 0(a4)
    0x13, 0x05, 0x50, 0x05,   // 0x1c: addi a0, zero, 0x55
    0x23, 0x02, 0xA7, 0x00,   // 0x20: sb    a0, 4(a4)
    0x83, 0x45, 0x47, 0x00,   // 0x24: lbu   a1, 4(a4)
    0x73, 0x00, 0x10, 0x00    // 0x28: ebreak  ← 程序结束
};

uint32_t regs[32] = {0};
uint32_t pc = 0;
uint32_t next_pc = 0;
uint32_t inst = 0;

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

int main() {
    while (true)
    {
        inst = INST_CONCAT(M[pc], M[pc+1], M[pc+2], M[pc+3]);
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
            regs[BITS(inst, 11, 7)] = INST_CONCAT(M[addr], M[addr+1], M[addr+2], M[addr+3]);
        }
        else if (is_lbu(inst)) {
            uint32_t addr = regs[BITS(inst, 19, 15)] + BITS_S(inst, 31, 20);
            regs[BITS(inst, 11, 7)] = M[addr];
        }
        else if (is_sw(inst)) {
            uint32_t addr = ((uint32_t)BITS_S(inst, 31, 25) << 5) + BITS(inst, 11, 7) + regs[BITS(inst, 19, 15)];
            uint32_t src = regs[BITS(inst, 24, 20)];
            M[addr] = BITS(src, 7, 0);
            M[addr+1] = BITS(src, 15, 8);
            M[addr+2] = BITS(src, 23, 16);
            M[addr+3] = BITS(src, 31, 24);
        }
        else if (is_sb(inst)) {
            uint32_t addr = ((uint32_t)BITS_S(inst, 31, 25) << 5) + BITS(inst, 11, 7) + regs[BITS(inst, 19, 15)];
            uint32_t src = regs[BITS(inst, 24, 20)];
            M[addr] = BITS(src, 7, 0);
        }
        else if (is_ebreak(inst)) {
            printf("halt: a0=%d a1=%d a2=%d a3=0x%X a4=0x%X a5=%d\n",
            (int32_t)regs[10], (int32_t)regs[11], (int32_t)regs[12],
            regs[13], regs[14], regs[15]);
            printf("M[0x100]=0x%02X M[0x101]=0x%02X M[0x102]=0x%02X M[0x103]=0x%02X M[0x104]=0x%02X\n",
            M[0x100], M[0x101], M[0x102], M[0x103], M[0x104]);
            break;
        }
        else {
            ;
        }
        pc = next_pc;
        regs[0] = 0;
    }
    return 0;
}
