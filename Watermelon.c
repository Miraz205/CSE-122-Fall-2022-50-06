#include<stdio.h>
int main()
{
    int wet;
    scanf("%d", &wet);
    if((2<wet) && (wet<=100) && (wet%2==0))
    {
        printf("Yes");

    }

    else
    {
        printf("No");
    }
    return 0;
}
