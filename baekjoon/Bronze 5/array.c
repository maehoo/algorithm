#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int v,total=0;
    scanf("%d",&v);
    for(i=0;i<N; i++)
    {
        if(arr[i]==v)
            total+=1;
    }
    printf("%d",total);
    return 0;

}