#ifndef MINIEMU_H
#define MINIEMU_H

#include <stdint.h>

void     emu_init(void);
void     emu_load_program(const uint8_t* program, int len);
void     emu_cycle(void);
void     emu_set_uart_status(uint32_t val);
uint32_t emu_get_reg(int i);
uint32_t emu_get_pc(void);
uint32_t emu_get_exit_code(void);
int      emu_is_ebreak(void);
void emu_set_rtc_lo(uint32_t val);
void emu_set_rtc_hi(uint32_t val);

#endif