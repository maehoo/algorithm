#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    
    int i,k,j;
    for(i=1;i<=((2*A-1)/2)+1;i++)
    {
        for(k=1;k<=A-i;k++)
            printf(" ");
        for(j=1;j<=(i*2)-1;j++)
            printf("*");
        printf("\n");
    }
    i-=2;
    for(;i>=1;i--)
    {
        for(k=1;k<=A-i;k++)
            printf(" ");
        for(j=1;j<=(i*2)-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}