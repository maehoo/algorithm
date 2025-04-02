#include <stdio.h>

int compare(int (*ptr)[9],int a)
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a<=ptr[i][j])
                a=ptr[i][j];
        }
    }
    return a;
}

int main(void)
{
    int arr[9][9];
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a;
    a=arr[0][0];
    a = compare(arr,a);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(a==arr[i][j])
            {
                printf("%d\n",a);
                printf("%d %d",i+1,j+1);
                break;
            }
        }
        if(j!=9)
            break;
    }
    return 0;
}