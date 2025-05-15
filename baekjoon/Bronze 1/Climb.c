#include <stdio.h>

int main(void)
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    int D= A-B;
    int E= C-A;
    int F;
    if(E%D ==0 )
    {
        F = E/D;
    }
    else
    {
        F = E/D +1;
    }
    printf("%d",F+1);
    return 0;
}