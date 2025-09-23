#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>


using namespace std;

int main(void)
{
    int num;
    cin >> num;
    char arr[100];
    int number1;
    int result=num;
    for(number1=num;number1>=0;number1--)
    {
        snprintf(arr,sizeof(arr),"%d",number1);
        int i = strlen(arr);
        int k = 0;
        int j;
        for(j=0;j<i;j++)
        {
            k += arr[j] - '0';
        }
        if(number1+k == num)
        {
            if(number1<result)
            {
                result = number1;
            }
        }
    }
    if(result == num)
    {
        result =0;
    }
    cout<< result <<endl;
  
    return 0;
}