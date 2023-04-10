#include<iostream>
using namespace std;
int main()
{
    int i, n, a, m=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a>0)
        {
            m++;
        }
    }
    if(m>0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
    return 0;

}
