#include<stdio.h>
int main()
{
    int a, b, c, k, e, f=0, i;
    float g;
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &k);
        e=b+c+k;
        if(e>=2)
        {
           f++;
        }
    }
    printf("%d", f);
    return 0;
}
