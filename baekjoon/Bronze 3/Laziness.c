#include <stdio.h>

int main(void)
{
    int arr[30];
    int i,a,b;
    for(i=0;i<30;i++)
    {
        arr[i]=i+1;
    }
    for(i=0;i<28;i++)
    {
        scanf("%d", &a);
        arr[a-1]=0;
    }
    for(i=0;i<30;i++)
    {
        if(arr[i]!=0)
            printf("%d\n",arr[i]);
    }
    return 0;
}