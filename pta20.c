/*
猜数字游戏是令游戏机随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。如果猜到，则结束程序。程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”；如果3次以内猜到该数，则提示“Lucky You!”；如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；如果超过N次都没有猜到，则提示“Game Over”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。

输入格式:
输入第一行中给出两个不超过100的正整数，分别是游戏机产生的随机数、以及猜测的最大次数N。最后每行给出一个用户的输入，直到出现负数为止。

输出格式:
在一行中输出每次猜测相应的结果，直到输出猜对的结果或“Game Over”则结束。
*/
#include <stdio.h>

int main() {
    int secretNumber, maxAttempts;
    int guess;
    int attemptCount = 0;

    // 读取随机数和最大猜测次数
    scanf("%d %d", &secretNumber, &maxAttempts);

    while (attemptCount < maxAttempts) {
        // 读取用户猜测
        scanf("%d", &guess);

        // 检查用户输入的猜测是否为负数
        if (guess < 0) {
            printf("Game Over\n");
            return 0;
        }

        attemptCount++;  // 增加猜测次数

        // 比较猜测与随机数
        if (guess == secretNumber) {
            if (attemptCount == 1) {
                printf("Bingo!\n");
            } else if (attemptCount <= 3) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }
            return 0;  // 猜对了，结束程序
        } else if (guess < secretNumber) {
            printf("Too small\n");
        } else {
            printf("Too big\n");
        }
    }

    // 如果达到最大猜测次数
    printf("Game Over\n");
    return 0;
}
