#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int i, n, k, m=0;
    cin>>n >>k;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] &&a[i]>0)
        {
            m++;
        }
    }
    cout<< m;
    return 0;

}
