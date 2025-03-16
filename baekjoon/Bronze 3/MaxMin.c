#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    int a,b,c,d,e;
    scanf("%d",&b);
    c=b,d=b;
    for(a=2;a<=N;a++)
    {
        scanf("%d",&e);
        if(e>c)
            c=e;
        if(e<d)
            d=e;
    }
    printf("%d %d",d,c);
    return 0;
    
}