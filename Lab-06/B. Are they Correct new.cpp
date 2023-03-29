#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, j=0, n, p=0;
    string s;
    string a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>> s;
          if (s[0]=='Y'||s[0]=='y')
        {
            if(s[1]=='E'||s[1]=='e')
            {
                if(s[2]=='S'||s[2]=='s')
                {
             cout<<"YES"<<endl;
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

