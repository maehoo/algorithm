#include <stdio.h>

int main(void)
{
    int T;//반복 횟수
    scanf("%d",&T);
    int S;//각 테스트 반복 횟수
    char arr[100];
    int i,k,j;
    for(i=0;i<T;i++)
    {
        scanf("%d %s",&S,arr);
        
        for(k=0;arr[k]!='\0';k++)
        {
            for(j=1;j<=S;j++)
            {
                printf("%c",arr[k]);
            }
        }
        printf("\n");
    }
    return 0;
    
}