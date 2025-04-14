#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    int i,sum1=0,sum2=0,k=0;
    for(i=1;i<=1000000;i++)
    {
        sum1 += i;
        k+=1;
        if(A<=sum1)
        break;
        sum2 += i;
    }
    int j= A - sum2;
    if(k%2==0)
    printf("%d/%d",j,i-j+1);
    else
    printf("%d/%d",i-j+1,j);
    return 0;

    
}