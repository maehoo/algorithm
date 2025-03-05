#include <stdio.h>

int main(void)
{
  int A,B,sum=0;
  scanf("%d",&B);
  for(A=1;A<=B;A++)
  {
    sum+=A;
  }
  printf("%d",sum);
  return 0;
}