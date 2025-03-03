#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int B;
    for(B=1;B<=9;B++)
    {
        printf("%d * %d = %d\n", N, B, N*B);
    }
    return 0;
}