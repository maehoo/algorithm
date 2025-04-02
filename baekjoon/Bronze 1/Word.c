#include <stdio.h>
#include <string.h>

int bigger(int * ptr)
{
    int bigger=0;
    int i;
    for(i=0;i<=25;i++)
    {
        if(ptr[i]>=bigger)
            bigger = ptr[i];
    }
    return bigger;
}

void what(int big,int * ptr)
{
    int sum=0;
    int i;
    int j;
    for(i=0;i<=25;i++)
    {
        if(big==ptr[i])
        {
            sum++;
            j=i;
        }
    }
    if(sum==1)
        printf("%c",j+65);
    else
        printf("?");
}
int main(void)
{
    char word[1000001];
    int arr[26];
    scanf("%s",word);

    int len=strlen(word);

    int i,sum=0,j;
    int k=0;
    for(i='A';i<='Z';i++)
    {
        for(j=0;j<=len-1;j++)
        {
            if(word[j]==i || word[j]==i+32)
                sum+=1;
        }
        arr[k]=sum;
        k++;
        sum=0;
    }

    int big;
    big=bigger(arr);
    what(big,arr);
    return 0;
}