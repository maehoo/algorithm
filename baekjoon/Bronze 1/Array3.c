#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    int arr[10001]={0};
    int i;
    int a;
    for(i=0;i<A;i++)
    {
        scanf("%d",&a);
        arr[a]++;
    }
    int j;
    for(i=1;i<10001;i++)
    {
        for(j=0;j<arr[i];j++)
        {
            printf("%d\n",i);
        }
    }
    return 0;
    
}