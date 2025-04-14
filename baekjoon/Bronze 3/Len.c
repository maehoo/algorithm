#include <stdio.h>

int compare(int x, int x2)
{
    if(x>=(x2-x))
        return (x2-x);
    else
        return x;
}

int main(void)
{
    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    int len, len2;
    len = compare(x,w);
    len2 = compare(y,h);
    int result;
    if(len>len2)
        result = len2;
    else
        result = len;
    printf("%d",result);
    return 0;
}