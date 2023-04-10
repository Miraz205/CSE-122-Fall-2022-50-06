#include<iostream>
using namespace std;
int main()
{
    int i, k=0, n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            k++;
        }
    }
    cout<<k;
    return 0;

}
