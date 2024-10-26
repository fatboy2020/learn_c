#include <stdio.h>

int main() {
    int start_time, minutes;
    int start_hour, start_minute;
    int total_minutes, end_hour, end_minute;

    // 输入起始时间和流逝分钟数
    printf("请输入起始时间和流逝分钟数：");
    scanf("%d %d", &start_time, &minutes);

    // 分离小时和分钟
    start_hour = start_time / 100;  // 获取小时部分
    start_minute = start_time % 100;  // 获取分钟部分

    // 计算总的分钟数
    total_minutes = start_hour * 60 + start_minute + minutes;

    // 计算终止时间的小时和分钟
    end_hour = (total_minutes / 60) % 24;  // 确保小时在24小时制内
    end_minute = total_minutes % 60;

    // 输出终止时间
    if (end_hour < 10) {
        printf("%d%02d\n", end_hour, end_minute);  // 小时为个位数时没有前导0
    } else {
        printf("%02d%02d\n", end_hour, end_minute);  // 正常输出四位数字
    }

    return 0;
}
