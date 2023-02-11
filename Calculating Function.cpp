#include<iostream>
using namespace std;
int main()
{
    long long int a, b;
    cin>>a;
    if(a%2==1)
    {
        b=-(a/2+1);
        cout<<b;
    }
    else
    {
        cout<<(a/2);
    }

    return 0;

}
