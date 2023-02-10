#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, n, m, j;
    string s;
    cin>>m>>n;
    cin>>s;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
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
