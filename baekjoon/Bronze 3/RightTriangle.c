#include <stdio.h>

int bigger(int * ptr)
{
    int a;
    if(ptr[0]>=ptr[1])
    {
        a=(ptr[0]>=ptr[2]) ? ptr[0] : ptr[2];
    }
    else if(ptr[0]<ptr[1])
    {
        a=(ptr[1]>=ptr[2]) ? ptr[1] : ptr[2];
    }
    return a;
}
int main(void)
{
int arr[3];
int a,b,c;
while(1)
{
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    a=bigger(arr);
    if(arr[0]==0)
        break;
    if(a*a*2==(arr[0]*arr[0])+(arr[1]*arr[1])+(arr[2]*arr[2]))
        printf("right\n");
    else
        printf("wrong\n");
}
return 0;
}