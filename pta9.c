#include <stdio.h>

int main() {
    int month, day, year;

    // 读取输入的美国日期格式 mm-dd-yyyy
    //printf("请输入美国格式的日期 (mm-dd-yyyy)：");
    scanf("%d-%d-%d", &month, &day, &year);

    // 输出中国日期格式 yyyy-mm-dd
    printf("%04d-%02d-%02d\n", year, month, day);

    return 0;
}
