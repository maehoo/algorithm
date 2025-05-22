#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    if (x>y)
    return 1;
    if (x<y)
    return -1;
    else
    return 0;
}
int main(void)
{
    int A;
    scanf("%d",&A);
    int *arr = (int *)malloc(A*sizeof(int));
    int i;
    for(i=0;i<A;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    qsort(arr,A,sizeof(int),compare);
    for(i=0;i<A;i++)
    {
        printf("%d",arr[i]);
        if(i!=(A-1))
        {
            printf("\n");
        }
    }
    return 0;
}