#include <stdio.h>

int main(void)
{   
    int N;
    scanf("%d",&N);
    char arr[N];
    scanf("%s",arr);
    int i,k=0;
    for(i=0;i<N;i++)
    {
        k+=arr[i] - '0';
    }
    printf("%d",k);
    return 0;
}