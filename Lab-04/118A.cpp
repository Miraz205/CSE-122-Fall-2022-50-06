#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, j=1, m, n;
    string s;
    string c;
    cin>> s;
    m=s.size();
    for(i=0; i<m; i++)
    {
        s[i]=tolower(s[i]);
    }
    for(i=0; i<m; i++)
    {
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'y' )
        {
            continue;
        }
        else
        {
            cout<<'.'<<s[i];
        }

    }
    return 0;
}
