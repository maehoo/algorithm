#include <stdio.h>

int main(void)
{
    int A,B;
    scanf("%d %d",&A,&B);
    int arr[10000]={0};
    int i=1,z=0;
    for(;i<=A;i++)
    {
        if(A%i==0)
        {
            arr[z]=i;
            z++;
        }
    }
    printf("%d",arr[B-1]);
    return 0;
}