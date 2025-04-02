#include <stdio.h>
void array(int *ptr,int M)
{
    int i;
    for(i=0;i<M;i++)
    {
        scanf("%d",&ptr[i]);
    }
}
int main(void)
{
    int A,B;
    scanf("%d %d",&A,&B);
    int N[A][B];
    int M[A][B];
    int i,j;
    for(i=0;i<A;i++)
    {
        array(N[i],B);
    }
    for(i=0;i<A;i++)
    {
        array(M[i],B);
    }
    
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%d ",N[i][j]+M[i][j]);
        }
        printf("\n");
    }
    return 0;
}