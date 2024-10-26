#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, product;
    float quotient;

    // 读取两个整数
    printf("请输入两个整数，以空格分隔：");
    scanf("%d %d", &a, &b);

    // 计算和、差、积
    sum = a + b;
    diff = a - b;
    product = a * b;

    // 输出和、差、积
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);

    // 判断整除情况并输出商
    if (a % b == 0) {
        printf("Quotient = %d\n", a / b);  // 整除时输出整数格式
    } else {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);  // 不能整除时输出两位小数
    }

    return 0;
}
