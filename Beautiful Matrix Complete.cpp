#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double i, j, m, sum;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>> m;
            if(m==1)
            {
               sum = abs(i-3)+abs(j-3);
            }
        }
    }
    cout<< sum;
    return 0;
}
