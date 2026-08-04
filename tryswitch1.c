#include<stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    int a = (x > 0) - (x < 0);

    switch (a)
    {
    case 1:
        printf("f(%.2f) = %.2f\n", (double)x, x * x );
        break;
    case 0:
        printf("f(%.2f) = %.2f\n", (double)x, 0.00);
        break;
    case -1:
        printf("f(%.2f) = %.2f\n", (double)x, 1.00/x);
        break;
    }

    return 0;
}