#include<iostream>
using namespace std;
int main()
{
    int i, j=0, n;
    cin >> n;
    int a[n], b[2*n];
    for(i=0; i<n; i++)
    {
      cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    for(i=n; i<2*n; i++)
    {
        b[i]=a[j];
        j++;
    }
    for(i=0; i<2*n; i++)
    {
        cout<< b[i]<<" ";
    }

    return 0;

}
