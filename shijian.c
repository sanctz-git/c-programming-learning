#include<stdio.h>
int main()
{
    int a, b;
    int c, e;

    scanf("%d %d", &a, &b);
    c = (a / 100) * 60 + a % 100 + b;
    e = (c / 60) * 100 + c % 60;
    
    printf("%d\n",e);

    return 0;
}