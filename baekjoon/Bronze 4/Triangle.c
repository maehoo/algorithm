#include <stdio.h>

int main(void)
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A+B+C!=180)
    {
        printf("Error");
        return 0;
    }
    else
    {
        if(A==B && A==C)
            printf("Equilateral");
        else if(A==B || A==C || B==C)
            printf("Isosceles");
        else
            printf("Scalene");
    }
    return 0;
}