#include <stdio.h>

int main(void)
{
    int N,X;
    scanf("%d %d",&N, &X);
    int arr[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]<X)
            printf("%d ",arr[i]);
    }
    return 0;
}