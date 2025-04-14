#include <stdio.h>

int compare1(int *ptr, int A)
{
    int i;
    int j=ptr[0];
    for(i=1;i<A;i++)
    {
        if(j<ptr[i])
            j = ptr[i];
    }
    return j;   
}
int compare2(int *ptr, int A)
{
    int i;
    int j=ptr[0];
    for(i=1;i<A;i++)
    {
        if(j>ptr[i])
            j = ptr[i];
    }
    return j;   
}
int main(void)
{
    int A;
    scanf("%d",&A);
    int i;
    int B,C;
    int arr1[100001];
    int arr2[100001];
    for(i=0;i<A;i++)
    {
        scanf("%d %d",&B,&C);
        arr1[i]= B;
        arr2[i] =C;
    }
    int x1,y1,x2,y2;
    x1=compare1(arr1,A);
    x2=compare2(arr1,A);
    y1=compare1(arr2,A);
    y2=compare2(arr2,A);
    printf("%d",(x1-x2)*(y1-y2));
    return 0;
}