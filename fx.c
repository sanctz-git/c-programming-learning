#include<stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);

    double result;
    if (x == 0)
    {result = 0;
        /* code */
    }else {
        result = 1.0/x;
    }

    printf("f(%.1f) = %.1f\n", x, result);

    return 0;
    
}