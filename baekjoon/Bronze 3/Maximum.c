#include <stdio.h>

int main(void)
{
    int arr[9];
    int a,b,c;
    scanf("%d",&arr[0]);
    a=arr[0];
    for(b=1;b<9;b++)
    {
        scanf("%d",&arr[b]);
        if(a<arr[b])
         a=arr[b];
    }
    for(b=0;b<9;b++)
    {
        if(a==arr[b])
        {
            printf("%d\n",a);
            printf("%d",b+1);
        }
    }
    return 0;

}