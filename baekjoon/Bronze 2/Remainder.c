#include <stdio.h>

int main(void)
{
    int arr[10];
    int i,k,a=10;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]%=42;
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]==43)
            continue;
        for(k=i;k<9;k++)
        {
            if(arr[i]==arr[k+1])
            {
                arr[k+1]=43;
                a-=1;
            }

        }
        arr[i]=43;
    }
    printf("%d", a);
    return 0;

}