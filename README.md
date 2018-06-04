#BCD码转换函数#
##使用方法##
拷贝BCD.c,BCD.h至项目文件夹中，并包含BCD.h头文件。
##测试用例##
test_example.c是测试用例，展示了典型使用方法，并在Ubuntu14.04 32位上测试通过。
请使用
'gcc -Wall -std=c99 -o BCD.out BCD.c'
进行编译
编译参数说明：使用了c99标准库进行编译，因为程序里使用了uint8_t，是在c99库的stdint.h里的类型定义
