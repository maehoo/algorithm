#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    scanf("%s",word);

    int len=strlen(word);
    int i,sum=0;;
    for(i=0;i<=len-1;i++)
    {
        if(word[i]=='c' && word[i+1]=='=')
            sum++,i++;
        else if(word[i]=='c' && word[i+1] == '-')
            sum++,i++; 
        else if(word[i]=='d' && word[i+1] == 'z' && word[i+2] =='=')
            sum++,i+=2;
        else if(word[i]=='d' && word[i+1] == '-')
            sum++,i++;
        else if(word[i]=='l' && word[i+1] == 'j')
            sum++,i++;
        else if(word[i] == 'n' && word[i+1] == 'j')
            sum++,i++;
        else if(word[i] == 's' && word[i+1] == '=')
            sum++,i++;
        else if(word[i] == 'z' && word[i+1] == '=')
            sum++,i++;
        else
            sum++;
    }
    printf("%d",sum);
    return 0;
}