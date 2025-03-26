#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000001];
    fgets(arr,sizeof(arr),stdin);
    
    int len = strlen(arr);
    if(arr[len-1]=='\n')
    {
    arr[len-1]='\0';
    len-=1;
    }
//처음 공백  마지막 공백  중간 공백 
    int i,k=0;
    for(i=0;i<len;i++)
    {
        if(arr[i]!=' ' && (i==0 || arr[i-1]== ' '))
            k++;
    }

    printf("%d\n",k);
    return 0;

}