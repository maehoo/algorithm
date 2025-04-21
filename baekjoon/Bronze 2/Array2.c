#include <stdio.h>

int main(void)
{
    int arr[5];
    int i;
    int sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum/5);
    int j;
    int tnum;
    for (i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                tnum = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tnum;
            }
        }
    }
    printf("%d",arr[2]);
    return 0;
}