/**
  ******************************************************************************
  * @file    test_example.c
  * @author  CZZ
  * @version V1.0.0
  * @date    2018-06-02
  * @brief   test example for convertion between BCD and int
  ******************************************************************************
  测试BCD码转换函数
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stdio.h"
#include "BCD.h"

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  测试函数
  */
int main(int argc, char const *argv[])
{
    char original_bcd_str[] = "68";
    uint8_t original_bcd_num = 0x68;
    uint8_t result_int = 0;

    uint8_t original_int = 68;
    char result_bcd_str[3] = {0};
    uint8_t result_bcd_int = 0;

    result_int = bcd_str_to_int(original_bcd_str);
    printf("bcd_str_to_int:0x\"%s\" -> %d\n", original_bcd_str,result_int);

    result_int = bcd_number_to_int(original_bcd_num);
    printf("bcd_number_to_int:0x%X -> %d\n", original_bcd_num, result_int);

    int_to_bcd_str(original_int,result_bcd_str);
    printf("int_to_bcd_str:%d -> 0x\"%s\"\n", original_int, result_bcd_str);

    result_bcd_int = int_to_bcd_number(original_int);
    printf("int_to_bcd_number:%d -> 0x%x\n", original_int, result_bcd_int);

    return 0;
}
/************************ (C) COPYRIGHT *****END OF FILE****/
