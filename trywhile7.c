#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    double sum = 1.0, term = 1.0;
    int i = 1;
    do
    {
        term = term * x / i;
        sum += term;
        i++;
        /* code */
    } while (fabs(term) >= 0.00001);
    printf("%.4f\n",sum);

    return 0;
    
}