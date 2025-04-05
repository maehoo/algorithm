#include <stdio.h>

int main(void)
{
    int arr[100][100] = {{0}};
    int A,X,Y;
    int i,j;
    scanf("%d",&A);
    int z;
    for(z=1;z<=A;z++)
    {
        scanf("%d %d",&X,&Y);
        for(i=X-1;i<=X+8;i++)
        {
            for(j=Y-1;j<=Y+8;j++)
            {
                if(i<=99 && j<=99)
                    arr[i][j] = 1;
            }
        }
    }
    int sum=0;
    for(i=0;i<=99;i++)
    {
        for(j=0;j<=99;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
    
}