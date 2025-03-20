#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    double arr[N];
    int i;
    double a=0,k=0;
    for(i=0;i<N;i++)
    {
        scanf("%lf",&arr[i]);
        if(arr[i]>=a)
        a=arr[i];
    }
    for(i=0;i<N;i++)
    {
        arr[i]=arr[i]*100/a;
        k+=arr[i];
    }
    printf("%f",k/N);
    return 0;
    

}