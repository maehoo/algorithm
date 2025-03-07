#include <stdio.h>

int main(void)
{
    int X, N, a, b, sum=0;
    scanf("%d", &X);
    scanf("%d", &N);
    int i;
    for(i=1; i<=N; i++)
    {
        scanf(" %d %d", &a, &b);
        sum+=a*b;
    }
    if(X == sum)
        printf("Yes");
    else
        printf("No");

    return 0;
}