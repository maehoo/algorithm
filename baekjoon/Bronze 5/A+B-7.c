#include <stdio.h>

int main(void)
{
    int A,B,C,D;
    scanf("%d",&B);
    for(A=1;A<=B;A++)
    {
        scanf("%d %d",&C, &D);
        printf("Case #%d: %d",A,C+D);
    }
    return 0;
}