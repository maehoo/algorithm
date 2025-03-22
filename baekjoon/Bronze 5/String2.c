#include <stdio.h>

int main(void)
{
    int A,a;
    char arr[1000];
    int i;
    scanf("%d",&A);
    for(a=1;a<=A;a++)
    {
    scanf("%s",arr);
    for(i=0;;i++)
    {
        if(arr[i]=='\0')
        break;
    }
    printf("%c%c\n",arr[0],arr[i-1]);
    }
   return 0;

}