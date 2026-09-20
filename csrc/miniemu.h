#ifndef MINIEMU_H
#define MINIEMU_H

#include <stdint.h>

void     emu_init(void);
void     emu_load_program(const uint8_t* program, int len);
void     emu_cycle(void);
uint32_t emu_get_reg(int i);
uint32_t emu_get_pc(void);
int      emu_is_ebreak(void);

#endif