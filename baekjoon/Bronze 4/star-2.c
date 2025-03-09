#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d", &A);
    int i,a,b;
    for(i=1;i<=A;i++)
    {
        for(a=1;a<=(A-i);a++)
            printf(" ");
        for(b=1;b<=i; b++)
            printf("*");
        printf("\n");
    }
    return 0;
}