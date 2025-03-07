#include <stdio.h>

int main(void)
{
    int A,B,C;
    scanf("%d %d %d",&A, &B, &C);
    if(A==B && A==C)
        printf("%d",10000+A*1000);
    else if(A==B || A==C)
        printf("%d", 1000+A*100);
    else if(B==C)
        printf("%d", 1000+B*100);
    else
    {
        int D,E;
        D=(A>B) ? A : B;
        E=(D>C) ? D : C;
        printf("%d", E*100);
    }
}