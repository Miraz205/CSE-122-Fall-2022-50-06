#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, n, x=0;
    cin>> n;
    string s;
    for(i=0; i<n; i++)
    {
        cin>> s;
        if(s[1]=='+')
        {
            x+=1;
        }
        else if(s[1]=='-')
        {
            x-=1;
        }
    }
    cout<< x;
    return 0;
}
