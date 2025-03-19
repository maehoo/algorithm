#include <stdio.h>

int main(void)
{
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[N];
    int i,a,b,tnum;
    for(i=0;i<N;i++)
    {
        arr[i]=i+1;
    }
    for(i=1;i<=M;i++)
    {
        scanf("%d %d",&a,&b);
        tnum=arr[a-1];
        arr[a-1]=arr[b-1];
        arr[b-1]=tnum;
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}