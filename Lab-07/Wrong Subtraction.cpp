#include<iostream>
using namespace std;
int main()
{
    int n, i, p;
    cin>>n;
    cin>>p;
    for(i=0; i<p; i++)
    {
        if(n%10==0)
        {
           n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
    return 0;

}

