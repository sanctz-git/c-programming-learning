#include<stdio.h>
int main()
{
    int a, b, t;
    scanf("%d/%d", &a, &b);
    int x=a, y=b;

    do
    {
        t = b;
        b = a % b;
        a = t;
    } while (b != 0);

    printf("%d/%d\n",x/a, y/a);

    return 0;
}