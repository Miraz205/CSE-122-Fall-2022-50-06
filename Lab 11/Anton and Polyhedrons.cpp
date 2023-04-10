#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, j ,k, sum=0;
    string s;
    cin>>k;
    for(i=0; i<k; i++)
    {
        cin>>s;

    if(s[0]=='T')
    {
        sum=sum+4;
    }
   else if(s[0]=='C')
    {
        sum=sum+6;
    }
     else if(s[0]=='O')
    {
        sum=sum+8;
    }
     else if(s[0]=='D')
    {
        sum=sum+12;
    }
    else if(s[0]=='I')
    {
        sum=sum+20;
    }
    }
    cout<<sum;
    return 0;


}
