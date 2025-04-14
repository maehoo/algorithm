#include <stdio.h>

int main(void)
{
    int A,B,C;
    int Q;
    while(1)
    {
        scanf("%d %d %d",&A, &B, &C);
        if(A==0)
        break;
        if(A>=B)
        {
            Q= (A>=C) ? A : C;
        }
        else
        {
            Q= (B>=C) ? B : C;
        }
        if(Q<(A+B) && Q<(A+C) && Q<(B+C))
        {
            if(A==B && A==C)
                printf("Equilateral\n");
            else if(A==B || A==C || B==C)
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
}