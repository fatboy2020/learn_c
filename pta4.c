#include <stdio.h>

int main() {
    int cm=0;  // 用户输入的厘米数
    int foot=0;   // 转换后的英尺
    int inch=0;  // 转换后的英寸

    // 提示用户输入厘米数
   
    scanf("%d", &cm);

    // 将厘米数转换为英尺
    foot = (int)(cm / 30.48);  // 整数部分为英尺
    inch = (cm / 2.54) - (foot * 12);  // 剩余部分转换为英寸

    // 输出结果
    printf("%d %d\n", foot, inch);

    return 0;
}
