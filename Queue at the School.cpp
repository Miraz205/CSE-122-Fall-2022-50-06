#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, j, n, m;
    string s;
    cin>>n;
    cin>>m;
    cin>>s;
    for(i=0; i<m; i++)
    {
        for(j=0; i<n; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
               swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    cout<<s;
    return 0;
}
