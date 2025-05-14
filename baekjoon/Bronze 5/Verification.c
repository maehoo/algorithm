#include <stdio.h>

int main(void)
{
    int A;
    int i,result=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&A);
        result += A*A;
    }
    printf("%d",result%10);
    return 0;
}