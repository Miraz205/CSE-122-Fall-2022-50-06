#include<iostream>
using namespace std;
int main()
{
    int i, j, k, l, n;
    cin>>n;
    int a[n];
    for(i=1; i<=n; i++)
    {
        cin>>k;
        a[k]=i;
    }
    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}

