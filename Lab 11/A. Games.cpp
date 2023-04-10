#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i, j=0,k=0, n;
    int a[100], b[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
       if(a[i]== b[j])
       {
           k++;
       }
    }
    }
    cout<<k;
    return 0;

}
