#ifndef __BCD_H__
#define  __BCD_H__

#include "stdint.h"

uint8_t bcd_str_to_int(char bcd[]);
uint8_t bcd_number_to_int(uint8_t bcd);

void int_to_bcd_str(uint8_t num,char result[]);
uint8_t int_to_bcd_number(uint8_t num);

#endif  //__BCD_H__
/**********************end of file*/
