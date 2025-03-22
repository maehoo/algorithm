#include <stdio.h>

int main(void)
{
    char arr[100];
    scanf("%s",arr);
    int i;
    for(i=0;;i++)
    {
        if(arr[i]=='\0')
            break;
    }
    printf("%d",i);
    return 0;
}