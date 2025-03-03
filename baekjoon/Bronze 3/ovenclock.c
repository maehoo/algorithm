#include <stdio.h>

int main(void)
{
    int A, B, C;
    scanf(" %d %d ", &A, &B);
    scanf("%d", &C);
    int D,E;
    D= C/60;
    E=C%60;
    B+=E;
    if(B>=60)
    {
        A+=1;
        B-=60;
        A+=D;
        if(A>=24)
        {
            A-=24;
        }
    }
    else
    {
        A+=D;
        if(A>=24)
        {
            A-=24;
        }
    }
    printf("%d %d", A, B);
    return 0;
   
}