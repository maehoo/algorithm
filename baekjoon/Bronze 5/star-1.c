#include <stdio.h>

int main(void)
{
    int i,a,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(b=1;b<=i;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}