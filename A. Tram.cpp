#include<iostream>
using namespace std;
int main()
{
    int i,sum=0, n, a, b, max=0;
    int c;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        sum=(sum+b)-a;
        if(sum>max)
        {
            max=sum;
        }

     }


    cout<<max;
    return 0;
}

