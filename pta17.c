#include <stdio.h>
#include <stdlib.h>

int main() {
    char expression[100];
    int result = 0;
    char operator = '+';
    
    // 读取输入的算式，去掉末尾的等号
    scanf("%s", expression);
    char *ptr = expression;

    while (*ptr != '=' && *ptr != '\0') {
        int number = atoi(ptr);
        
        // 移动指针到数字末尾
        while (*ptr >= '0' && *ptr <= '9') {
            ptr++;
        }

        // 根据当前操作符进行计算
        switch (operator) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                if (number == 0) {
                    printf("ERROR\n");
                    return 0;
                } else {
                    result /= number;
                }
                break;
            default:
                printf("ERROR\n");
                return 0;
        }

        // 更新当前操作符
        if (*ptr != '=' && *ptr != '\0') {
            operator = *ptr;
            ptr++;
        }
    }

    // 输出结果
    printf("%d\n", result);
    return 0;
}
