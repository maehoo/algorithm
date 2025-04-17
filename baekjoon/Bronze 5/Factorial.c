#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d", &A);
    if(A==0)
    {
        printf("1");
        return 0;
    }
    long long sum =1;
    for(;A>=1;A--)
    {
        sum *= A;
    }
    printf("%lld",sum);
    return 0;
}