#include <stdio.h>

int main(void)
{
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[N];
    int i,a,b,c;
    for(i=0;i<N;i++)
    {
        arr[i]=0;
    }
    for(i=1;i<=M;i++)
    {
        scanf("%d %d %d",&a,&b,&c); //a<=b
        for(;a<=b;a++)
         arr[a-1]=c;
    }
    for(i=0;i<=N-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}