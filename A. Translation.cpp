#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i, l, m=0;
    string s;
    string n;
    cin>>s;
    cin>>n;
    l=n.size()-1;
    for(i=0; i<=l; i++)
   {
       if(s[i]!=n[l-i])
       {
           m++;
           break;
       }
   }
   if(m>0)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }

    return 0;
}
