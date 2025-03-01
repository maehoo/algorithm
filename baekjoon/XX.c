#include <stdio.h>

int main(void)
{
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    int a1, a2, a3;
    a1= (num2/100)*num1;
    a2= (num2/10)%10*num1;
    a3= num2%10*num1;
    printf("%d\n%d\n%d\n%d\n",a3,a2,a1,num1*num2);
    return 0;
}