/**
  ******************************************************************************
  * @file    BCD.c
  * @author  CZZ
  * @version V1.0.0
  * @date    2018-06-03
  * @brief   use for convertion between BCD and int
  ******************************************************************************
  BCD码转换函数，注意bcd_str是双字节字符串并外加'\0'结尾，即char[3];并且char[2]='\0';
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stdlib.h"
#include "stdio.h"
#include "BCD.h"

//直接转换为十进制数
uint8_t bcd_str_to_int(char bcd[]){
    return atoi(bcd);
}

//使用网上的精妙算法进行运算逻辑简化
uint8_t bcd_number_to_int(uint8_t bcd){
    return bcd-(bcd >> 4)*6;
}

//必须要分开格式化以保证0不被省略
void int_to_bcd_str(uint8_t num,char result[]){
    sprintf(result,"%d%d",num/10,num%10);
}

//分取高低四位赋值即可
uint8_t int_to_bcd_number(uint8_t num){
    return ((num/10) << 4) | ((num%10) & 0x0F);
}
/**********************end of file*/
