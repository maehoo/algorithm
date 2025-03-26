#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[16];
    fgets(arr,sizeof(arr),stdin);
    
    int len = strlen(arr);
    if(arr[len-1]=='\n')
    {
        arr[len]='\0';
        len--;
    }

    int i,k=0;
    for(i=0;i<len;i++)
    {
        if (arr[i]<='C')
            k+=3;
        else if(arr[i]<='F')
            k+=4;
        else if(arr[i]<='I')
            k+=5;
        else if(arr[i]<='L')
            k+=6;
        else if(arr[i]<='O')
            k+=7;
        else if(arr[i]<='S')
            k+=8;
        else if(arr[i]<='V')
            k+=9;
        else
            k+=10;
    }
    printf("%d\n",k);
    return 0;
}