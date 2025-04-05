#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[5][17];
    int i,j;
    for(i=0;i<5;i++)
    {
        memset(arr[i],'\0',sizeof(arr[i]));
        fgets(arr[i],sizeof(arr[i]),stdin);
    }
    for(j=0;j<17;j++)
    {
        for(i=0;i<5;i++)
        {
            if(arr[i][j]!= '\n' && arr[i][j]!='\0')
                printf("%c",arr[i][j]);
        }
    }
    return 0;
}