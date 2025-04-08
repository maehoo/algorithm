#include <stdio.h>

int main(void)
{
    int A,B,Z,i;
    char arr[10000];
    scanf("%d %d",&A,&B);
    while(A!=0)
    {
    
        Z=A%B;
        A=A/B;
        if(Z>=10)
        arr[i]=Z+55;
        else
        arr[i]=Z+48;
        i++;
    }
    i -=1;
    for(;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
} 