#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, k=0, l=0, n;
    string s;
    cin>>n;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            k++;
        }
        else
        {
            l++;
        }
    }
    if(k>l)
    {
        cout<<"Anton";
    }
   else if(k<l)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}
