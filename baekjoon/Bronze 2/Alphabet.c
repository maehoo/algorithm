#include <stdio.h>

int main(void)
{
    char arr[100];
    scanf("%s",arr);
    int i,j;
    char k;
    for(i=97;i<=122;i++)
    {
        k= i;
        for(j=0;arr[j]!='\0';j++)
        {
         if(k==arr[j])
         {
         printf("%d ",j);
         break;
         }
        }
        if(arr[j]=='\0')
        printf("%d ",-1);
    }
}