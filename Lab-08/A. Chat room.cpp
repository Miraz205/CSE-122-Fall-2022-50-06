#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, l, m=0, j=0, p=0;
    string s;
    string n="hello";
    cin>>s;
    l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]==n[j])
        {
            p++;
            j++;
        }

    }

if(p==5)
{
    cout<<"YES";

}
else
{
    cout<<"NO";
}
return 0;

}
