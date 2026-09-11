#ifndef SEMU_H
#define SEMU_H

#include <stdint.h>

void    emu_init(void);
void    emu_load(const uint8_t* program, int len);
void    emu_step(void);
uint8_t emu_get_pc(void);
uint8_t emu_get_reg(int idx);
void    emu_set_input(int idx, uint8_t value);
uint8_t emu_get_output(int idx);

#endif