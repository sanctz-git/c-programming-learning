#include<stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    double fact = 1 ,pow = x, sum = 1, i = 2;
    do
    {
        sum += 1.0 * pow / fact;
        if (1.0 * pow / fact < 0.00001)
        {
            break;
        }
        
        pow *= x;
        fact *= i;
        i++;

        /* code */
    } while (1);
    printf("%.4f\n", sum);
    
    return 0;
}