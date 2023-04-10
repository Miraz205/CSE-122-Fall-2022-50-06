#include<iostream>
using namespace std;
int main()
{

    float n;
    long long int a,b,c,d,e,g;
    cin>>n;
    if(n>=100)
    {
        a=n/100;
        n=n-(a*100);
    }
    else
    {
        a=0;
    }
    if(n>=20)
    {
        c=n/20;
        n=n-(c*20);
    }
    else
    {
        c=0;
    }
    if(n>=10)
    {
        d=n/10;
        n=n-(d*10);
    }
    else
    {
        d=0;
    }

    //////////////
    if(n>=5)
    {
        e=n/5;
        n=n-(e*5);
    }
    else
    {
        e=0;
    }
    //////////
    if(n>=1)
    {
        g=n/1;
        n=n-g*1;
    }
    else
    {
        g=0;
    }

    cout<<g+e+c+a+d;
}
