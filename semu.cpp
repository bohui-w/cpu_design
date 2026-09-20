#include "semu.h"
#include <string.h>

static uint8_t PC;
static uint8_t R[4];
static uint8_t M[256];
static uint8_t dev_in[8];
static uint8_t dev_out[8];

static int8_t sign_extend(uint8_t x, int bits) {
    int8_t mask = (int8_t)(1 << (bits - 1));
    return (x ^ mask) - mask;
}

void emu_init(void) {
    PC = 0;
    memset(R, 0, sizeof(R));
    memset(M, 0, sizeof(M));
    memset(dev_in, 0, sizeof(dev_in));
    memset(dev_out, 0, sizeof(dev_out));
}

void emu_load(const uint8_t* program, int len) {
    if (len > 256) len = 256;
    memcpy(M, program, len);
}

void emu_set_input(int idx, uint8_t value) {
    if (idx >= 0 && idx < 8) dev_in[idx] = value;
}

uint8_t emu_get_output(int idx) {
    if (idx >= 0 && idx < 8) return dev_out[idx];
    return 0;
}

void emu_step(void) {
    uint8_t inst = M[PC];
    uint8_t op   = (inst >> 6) & 0x3;
    uint8_t rd   = (inst >> 4) & 0x3;
    uint8_t rs1  = (inst >> 2) & 0x3;
    uint8_t rs2  = inst & 0x3;
    uint8_t i_o  = (inst >> 3) & 0x1;
    uint8_t idx  = inst & 0x7;
    uint8_t s    = (inst >> 2) & 0x3;
    uint8_t imm  = inst & 0x3;
    int8_t offset = sign_extend((inst >> 2) & 0xF, 4);

    switch (op) {
        case 0x0:
            R[rd] = R[rs1] + R[rs2];
            PC++;
            break;
        case 0x1:
            if (i_o == 0) R[rd] = dev_in[idx];
            else          dev_out[idx] = R[rd];
            PC++;
            break;
        case 0x2:
            R[rd] = imm << (s << 1);
            PC++;
            break;
        case 0x3:
            if (R[0] != R[rs2]) PC = PC + offset;
            else                PC++;
            break;
    }
}

uint8_t emu_get_pc(void)     { return PC; }
uint8_t emu_get_reg(int idx) { return R[idx & 0x3]; }