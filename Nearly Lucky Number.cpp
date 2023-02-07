#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, k=0, l, t=0, y=0;
    string s;
    cin>>s;
    l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            k++;
        }
    }
    if(k==4 || k==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
