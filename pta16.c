#include <stdio.h>

// 判断是否为闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year, month, day;
    // 定义每个月的天数（平年）
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 读取输入的日期
    scanf("%d/%d/%d", &year, &month, &day);

    // 判断是否为闰年，并调整2月的天数
    if (isLeapYear(year)) {
        days_in_month[2] = 29; // 闰年2月29天
    }

    // 计算当天是该年中的第几天
    int day_of_year = 0;
    for (int i = 1; i < month; i++) {
        day_of_year += days_in_month[i]; // 累加前几个月的天数
    }
    day_of_year += day; // 加上当前月的天数

    // 输出结果
    printf("%d\n", day_of_year);

    return 0;
}
