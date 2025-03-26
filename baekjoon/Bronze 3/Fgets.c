#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100][101];
    int i=0;
    while(i<100 && fgets(arr[i],sizeof(arr[i]),stdin) != EOF)
    {
        i++;
    }
    int k=0;
    while(k<i)
    {
        printf("%s",arr[k]);
        k++;
    }
    return 0;
}