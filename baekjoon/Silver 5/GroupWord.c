#include <stdio.h>
#include <string.h>

int compare(char * word, int * ptr)
{
    int len = strlen(word);
    int i, j;
    int visited[26] = {0};
    char prev = word[0];
    visited[prev - 'a'] = 1;

    for (i = 1; i < len; i++)
    {
        if (word[i] != prev)
        {
            if (visited[word[i] - 'a'])
                return 0; 
            visited[word[i] - 'a'] = 1;
        }
        prev = word[i];
    }

    return 1;
}

int main(void)
{
    int A;
    char arr[101];
    int alphabet[26];
    scanf("%d",&A);
    int i,len,j,sum,k;
    int total=0; // 마지막정답임
    for(i=1;i<=A;i++)
    {
        scanf("%s",arr);
        for(j='a';j<='z';j++)
        {
            sum=0;
            for(len=0;arr[len]!='\0';len++)
            {
                if(j==arr[len])
                    sum++;
            }
            alphabet[j-'a'] = sum;
        }
        total += compare(arr,alphabet);
    }
    printf("%d",total);
    return 0;
}