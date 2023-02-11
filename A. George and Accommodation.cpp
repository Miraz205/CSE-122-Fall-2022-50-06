#include<iostream>
using namespace std;
int main()
{
    int i, n, a, b, m=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if((b-a)>1)
        m++;
    }
    cout<<m;
    return 0;
}
