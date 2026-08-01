#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    double result;

    if (x >= 0)
    {result = sqrt(x);
        /* code */
    }else
    {result = pow(x + 1, 2) + 2.0*x + 1.0/x;
        /* code */
    }
    
    printf("f(%.2f) = %.2f\n", x, result);
    
    return 0;
    
}