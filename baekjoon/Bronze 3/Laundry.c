#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    int i,C;
    for(i=1;i<=A;i++)
    {
        scanf("%d",&C);
        printf("%d ",C/25);
        C%=25;
        printf("%d ",C/10);
        C%=10;
        printf("%d ",C/5);
        C%=5;
        printf("%d\n",C/1);
    }
    return 0;
}