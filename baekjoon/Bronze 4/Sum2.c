#include <stdio.h>

int main(void) {
    int N, sum = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int digit;
        scanf("%1d", &digit); // 한 자리 숫자 하나 읽음
        sum += digit;
    }

    printf("%d", sum);
    return 0;
}