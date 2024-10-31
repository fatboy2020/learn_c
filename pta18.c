#include <stdio.h>

int main() {
    int weightA, weightB, weightC;

    // 读取三个球的重量
    scanf("%d %d %d", &weightA, &weightB, &weightC);

    // 比较三个球的重量，找出不同的球
    if (weightA != weightB && weightA != weightC) {
        printf("A\n");  // A球与其他两个不同
    } else if (weightB != weightA && weightB != weightC) {
        printf("B\n");  // B球与其他两个不同
    } else if (weightC != weightA && weightC != weightB) {
        printf("C\n");  // C球与其他两个不同
    } else {
        printf("ERROR\n");  // 如果没有不同的球，输出错误信息（不应出现这种情况）
    }

    return 0;
}
