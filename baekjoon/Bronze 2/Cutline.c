#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    int arr[A];
    int k;
    scanf("%d",&k);
    int i;
    for(i=0;i<A;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,tnum;
    for(i=0;i<A;i++)
    {
        for(j=0;j<A-1;j++)
        {
            if(arr[j]<=arr[j+1])
            {
            tnum = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tnum;
            }
        }
    }
    printf("%d", arr[k-1]);
    return 0;
}