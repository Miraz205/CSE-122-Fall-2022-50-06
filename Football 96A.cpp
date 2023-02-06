#include<iostream>
#include<string>
using namespace std;
int main()
{
    int p, m=1, i;
    string s;
    cin>>s;
    p=s.size();
    for(i=0; i<p; i++)
    {
        if(s[i]==s[i+1])
        {
            m++;
            if(m==7)
            {
                break;
            }
        }
        else
        {
            m=1;
        }

    }
    if(m>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
