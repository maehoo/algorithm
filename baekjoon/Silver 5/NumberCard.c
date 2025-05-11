#include <stdio.h>

#define negative 10000000
#define size 20000001
char arr[size] = {0};
int main(void)
{
    
    int N,M,j;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&j);
        arr[negative + j] = 1;
    }
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        scanf("%d",&j);
        printf("%d ",arr[negative +j]);
    }
    return 0;
    
}