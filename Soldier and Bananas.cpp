#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, m=0, n, a, b, c;
    cin>>a>>b>>c;
    for(i=1; i<=c; i++)
    {
        m=m+a*i;
    }
    n=m-b;
    if(n<0)
    {
        cout<<0;
    }
    else{
      cout<<n;
    }

    return 0;
}

