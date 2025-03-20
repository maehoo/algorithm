#include <stdio.h>

int main(void)
{
    int N,M; // N은 바구니 개수 M은 횟수
    scanf("%d %d",&N,&M);
    int arr[N];
    int i;
    for(i=0;i<N;i++)
    {
        arr[i]=i+1;
    }
    int a,b,c,tnum;
    for(i=0;i<M;i++)
    {
        scanf("%d %d", &a,&b);
        for(c=0;c<=(b-a)/2.0;c++)
        {
            tnum = arr[a-1+c];
            arr[a-1+c]=arr[b-1-c];
            arr[b-1-c]=tnum;
        }
    }

    for(i=0;i<N;i++)
    printf("%d ",arr[i]);

    return 0;
}