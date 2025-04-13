#include <stdio.h>

int main(void)
{
    int A,i,sum;
    scanf("%d",&A);
    if(A==-1)
    {
        return 0;
    }
    int j;
    while(A!=-1)
    {
        int arr[100001]={0};
        j=0;
        sum=0;
        for(i=1;i<A;i++)
        {
            if(A%i==0)
            {
                sum+=i;
                arr[j]=i;
                j++;
            }
        }
        if(sum==A)
        {
            printf("%d = %d",A,arr[0]);
            for(i=1;i<j;i++)
            {
                printf(" + %d",arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d is NOT perfect.\n",A);
        }
        scanf("%d",&A);
    }
    return 0;
}