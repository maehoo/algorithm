#include <stdio.h>

int main(void)
{
    int M,N;
    scanf("%d %d",&M,&N);
    int sum,i,j=0;
    int arr[10001]={0};
    for(;M<=N;M++)
    {
        sum=0;
        for(i=1;i<=M;i++)
        {
            if(M%i==0)
            sum++;
        }
        if(sum==2)
        {
            arr[j]=M;
            j++;
        }
    }
    if(j==0)
    {
        printf("%d",-1);
        return 0;
    }
    int total=0;
    for(i=0;i<j;i++)
    {
        total+=arr[i];
    }
    printf("%d\n%d",total,arr[0]);
    return 0;
}