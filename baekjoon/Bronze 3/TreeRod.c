#include <stdio.h>

int compare(int *arr)
{
    int b = arr[0];
    int i;
    for(i=0;i<3;i++)
    {
        if(b<=arr[i])
        {
            b= arr[i];
        }
    }
    return b;
}
int main(void)
{
    int A[3];
    int i;
    int sum =0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&A[i]);
        sum += A[i];
    }
    int a;
    a = compare(A);
    int result;
    if(sum-a<=a)
    {
        result = (sum-a) + ((sum-a)-1);
    }
    else
    {
        result = sum;
    }
    printf("%d",result);
    return 0;
}