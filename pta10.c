#include <stdio.h>

int main() {
    int D, day_after_tomorrow;

    // 读取输入的星期几
   // printf("请输入一个代表星期几的数字 (1-7)：");
    scanf("%d", &D);

    // 计算后天是星期几
    day_after_tomorrow = (D + 2) % 7;
    
    // 如果结果为0，则表示是星期日（7）
    if (day_after_tomorrow == 0) {
        day_after_tomorrow = 7;
    }

    // 输出结果
    printf("%d\n", day_after_tomorrow);

    return 0;
}
