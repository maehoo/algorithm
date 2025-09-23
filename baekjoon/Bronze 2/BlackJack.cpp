#include <iostream>
using namespace std;

int main(void)
{
    int a,max;
    cin >> a>> max;
    int arr[a];
    int i;
    for(i=0;i<a;i++)
    {
        cin >> arr[i];
    }
    int A,B,C;
    A = arr[0];
    B = arr[1];
    C = arr[2];
    int j,k;
    int sum1,sum2;
    sum1=0,sum2=0;
    for(i=0;i<a;i++)
    {
        A=arr[i];
        for(j=i+1; j<a;j++)
        {
            B=arr[j];
            for(k=j+1; k<a;k++)
            {
                C=arr[k];
                sum1 = A+B+C;
                if(sum1>=sum2 && sum1<=max)
                {
                    sum2 = sum1;
                }
            }
        }
    }
    cout<<sum2<<endl;
    return 0;
}