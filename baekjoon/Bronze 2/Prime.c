#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    int i,B,j,sum,total=0;
    for(i=1;i<=A;i++)
    {
        sum=0;
        scanf("%d",&B);
        for(j=1;j<=B;j++)
        {
            if(B%j==0)
                sum++;
        }
        if(sum==2)
            total+=1;
    }
    printf("%d",total);
    return 0;
}