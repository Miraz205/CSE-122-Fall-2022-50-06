#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, l;
    string a, b;
    cin>>a>>b;
    l=a.size();
    for(i=0; i<l; i++)
    {
    a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);

    }
    if(a==b)
        {
            cout<<"0";
        }
    else
    {
    for(i=0; i<l; i++)
    {

       if(a[i]>b[i])
        {
            cout<<"1";
        break;
        }
       if(a[i]<b[i])
        {
            cout<<"-1";
        break;
        }
    }

    }
    return 0;
}
