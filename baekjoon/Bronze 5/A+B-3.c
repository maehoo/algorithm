#include <stdio.h>

int main(void)
{
    int A,B,C,D;
    scanf("%d",&A);
    for(B=1;B<=A;B++)
    {
        scanf("%d %d", &C,&D);
        printf("%d\n",C+D);
    }
    return 0;
}