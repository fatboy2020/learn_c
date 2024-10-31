
/*
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。
*/




#include <stdio.h>

// 函数计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 函数计算最小公倍数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int M, N;

    // 读取两个正整数
    scanf("%d %d", &M, &N);

    // 计算最大公约数和最小公倍数
    int GCD = gcd(M, N);
    int LCM = lcm(M, N);

    // 输出结果
    printf("%d %d\n", GCD, LCM);
    
    return 0;
}
