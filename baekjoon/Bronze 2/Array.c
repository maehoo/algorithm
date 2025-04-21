#include <stdio.h>

void compare(int *ptr,int A)
{
    int i;
    int tnum;
    for(i=0;i<A-1;i++)
    {
        if (ptr[i]>=ptr[i+1])
        {
            tnum = ptr[i];
            ptr[i] = ptr[i+1];
            ptr[i+1] = tnum;
        }
    }
}
int main(void)
{
    int A;
    int arr[1005];
    scanf("%d",&A);
    int i;
    for (i=0;i<A;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<A;i++)
    {
        compare(arr,A);
    }
    for(i=0;i<A;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}