#include<iostream>
using namespace std;
int main()
{
    int a, b, c, i, f;
    cin>>a>>b;
    f=a;
    for(i=0; i<a; i++)
    {
        cin>>c;
        if(c>b)
        {
            f++;
        }

    }
    cout<<f;
    return 0;
}
