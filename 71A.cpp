#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, n, l;
    string a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        l=a.size();
        if(l<=10)
        {
            cout<<a<<endl;
        }
        else
          {
            cout<<a[0]<<l-2<<a[l-1]<<endl;
          }
    }
    return 0;
}
