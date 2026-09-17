#include<stdio.h>
int main()
{
    int a, b, c, d = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {   d = a;
        a = b;
        b = d;
        /* code */
    }if(a < c)
    {   d = a;
        a = c;
        c = d;
        /* code */
    }if (b < c)
    {   d = b;
        b = c;
        c = d;
        /* code */
    }
    printf("%d->%d->%d\n", c, b, a);

    return 0;
    
}
    