#include <stdio.h>

int sign(int n) {
    if (n > 0) {
        return 1;
    } else if (n < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    // 读取输入整数
    //printf("请输入一个整数：");
    scanf("%d", &n);

    // 输出符号函数的结果
    printf("sign(%d) = %d\n",n, sign(n));

    return 0;
}
