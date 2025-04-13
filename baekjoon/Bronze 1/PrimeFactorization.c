#include <stdio.h>

int main(void)
{
    int A,i;
    scanf("%d",&A);
    while(A!=1)
    {
        for(i=2;i<=A;i++)
        {
            if(A%i==0)
            {
                printf("%d\n",i);
                A/=i;
                break;
            }
        }   
    }
    return 0;
}