#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    scanf("%s", word);
    
    int len=strlen(word);
  
    int result=1;
    int i;
    for(i=0;i<=(len/2)-1;i++)
    {
        if(word[i]!=word[len-i-1])
        {
            printf("0");
            return 0;
        }
    }
    printf("%d",result);
    return 0;
}