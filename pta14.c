#include <stdio.h>

int main() {
    int score;

    // 读取输入的百分制成绩
    //printf("请输入一个百分制成绩：");
    scanf("%d", &score);

    // 判断并输出对应的五分制成绩
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}
