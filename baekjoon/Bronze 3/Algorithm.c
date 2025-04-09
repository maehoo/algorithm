#include <stdio.h>

int main(void)
{
    int A;
    scanf("%d",&A);
    printf("%d",((2<<(A-1))+1)*((2<<(A-1))+1));
    return 0;
}