#include <stdio.h>

int main(void)
{
    int A,i;
    int B,C;
    scanf("%d",&A);
    for(i=1;i<=A;i++)
    {
        scanf("%d %d",&B,&C);
        printf("%d\n",B+C);
    }
}