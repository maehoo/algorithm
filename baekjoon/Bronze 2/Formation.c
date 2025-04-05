#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100000];
    int B;
    scanf("%s %d",arr,&B);
    
    int len = strlen(arr);
    int i,j;
    int B2=len;
    int sum=0;
    int partical;
    for(i=0;i<=len-1;i++)
    {
        partical = 0;
        if('0'<=arr[i] && arr[i] <='9')
        {
            partical = arr[i] - '0';
            for(j=1;j<=B2-1;j++)
            {
                partical *= B;
            }
            B2--;
        }
        if('A'<=arr[i] && arr[i]<='Z')
        {
            partical = arr[i] - 'A' + 10;
            for(j=1;j<=B2-1;j++)
            {
                partical *= B;
            }
            B2--;   
        }
        sum+=partical;
    }
    printf("%d",sum);
    return 0;
}