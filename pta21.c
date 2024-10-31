/*/
本题要求计算给定的一系列正整数中奇数的和。

输入格式:
输入在一行中给出一系列正整数，其间以空格分隔。当读到零或负整数时，表示输入结束，该数字不要处理。

输出格式:
在一行中输出正整数序列中奇数的和。
*/
#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    // 读取输入直到遇到零或负整数
    while (1) {
        scanf("%d", &number);
        
        // 检查输入是否为零或负整数，结束输入
        if (number <= 0) {
            break;
        }

        // 如果是奇数，则加到和中
        if (number % 2 != 0) {
            sum += number;
        }
    }

    // 输出奇数的和
    printf("%d\n", sum);
    return 0;
}
