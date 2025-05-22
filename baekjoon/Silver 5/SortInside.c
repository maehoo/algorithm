#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    long long arr[10]={0};
    char ch;
    char ch2[2];
    int i;
    int j;
    while((ch=getchar())!=EOF)
    {
        if('0'<=ch && ch<='9')
        {
        ch2[0] = ch;
        ch2[1] = '\0';
        i=atoi(ch2);
        arr[i] ++;
        }
    }
    for(j=9;j>=0;j--)
    {
        for(i=1;i<=arr[j];i++)
        {
            printf("%d",j);
        }
    }
   
    return 0;
}