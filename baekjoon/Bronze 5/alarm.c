#include <stdio.h>

int main(void)
{
    int H,M;
    scanf("%d %d", &H, &M);
    M-=45;
    if(M<0)
    {
        H-=1;
        if(H<0)
            H=23;
        M+=60;
    }
    printf("%d %d",H,M);
    return 0;
}