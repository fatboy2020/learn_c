#include <stdio.h>

int main() {
    int wrong_decimal;
    int bcd_value, tens, units;

    // 读取错误的十进制数
    //printf("请输入错误的十进制数：");
    scanf("%d", &wrong_decimal);

    // 将错误的十进制数转换为十六进制（BCD编码）
    bcd_value = wrong_decimal;  // 因为输入就是按错误方式处理的，所以直接用

    // 分解BCD编码的高4位和低4位
    tens = (bcd_value >> 4) & 0xF;  // 高4位表示十位数
    units = bcd_value & 0xF;        // 低4位表示个位数

    // 计算正确的十进制数
    int correct_decimal = tens * 10 + units;

    // 输出正确的十进制数
    printf("%d\n", correct_decimal);

    return 0;
}
