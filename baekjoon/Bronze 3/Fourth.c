#include <stdio.h>

int main(void)
{
    int A,B;
    int arr1[5];
    int arr2[5];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&A,&B);
        arr1[i] = A;
        arr2[i] = B;
    }
    int x,y;
    if(arr1[0] == arr1[1])
        x= arr1[2];
    else
    {
        x= arr1[0]==arr1[2] ? arr1[1] : arr1[0];
    } 
    if(arr2[0] == arr2[1])
        y= arr2[2];
    else
    {
        y= arr2[0]==arr2[2] ? arr2[1] : arr2[0];
    } 
    printf("%d %d",x,y);
    return 0;
}