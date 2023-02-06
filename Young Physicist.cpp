#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, i, sum1=0, sum2=0, sum3=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        sum1=sum1+a;
        sum2=sum2+b;
        sum3=sum3+c;
    }
    if(sum1==0 && sum2==0 && sum3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
