#include <stdio.h>

int main(void)
{
    long long A;
    scanf("%lld",&A);
    int N=1,sum=1,M=1;
    int plus=6;
    do
    {
        if(N<A)
            sum+=1;
        N+=plus;
        plus+=6;
    }while(A>=N);
    printf("%d",sum);
    return 0;
}