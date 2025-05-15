#include <stdio.h>

float a (char * arr)
{
    float b;
    if(arr[0] == 'F')
    {
        b=0;
        return b;
    }
    else if(arr[0]!='F')
    {
        b= 69 - arr[0];
    }
    if(arr[1] == '+')
    {
        b +=0.5;
    }
    else if(arr[1] == '-')
    {
        b -=0.5;
    }
    return b;

}
int main(void)
{
    char subject[100];
    float hak[1];
    char grade[2];

    int i;
    int hakchong=0;
    float c;
    float sum=0;
    for(i=0;i<20;i++)
    {
        scanf("%s%f%s",subject,hak,grade);
        if(grade[0] =='P')
            continue;
        hakchong += hak[0];
        c = a(grade);
        sum += hak[0] * c;
    }
    printf("%.6f",sum/hakchong);
    return 0;

}