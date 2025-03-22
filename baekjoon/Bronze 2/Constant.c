#include <stdio.h>

int main(void)
{
    char arr1[10],arr2[10];
    scanf("%s %s",arr1, arr2);
    char tnum;
    tnum = arr1[2];
    arr1[2]= arr1[0];
    arr1[0]= tnum;

    char tnum2;
    tnum2 = arr2[2];
    arr2[2] = arr2[0];
    arr2[0] = tnum2;

   int i;
   for(i=0;i<3;i++)
   {
    if(arr1[i]>arr2[i])
    {
        printf("%s",arr1);
        break;
    }
    else if(arr1[i]==arr2[i])
        continue;
    else
    {
        printf("%s",arr2);
        break;
    }
   }
    return 0;
}