#include<stdio.h>
double fact(int n)
{
    double result = 1.0;
    for (int i = 1; i <= n; i++)
    {   result *= i;
        /* code */
    }
    return result;
}

int main()
{
    int n, m;
    scanf("%d %d",&m, &n);

    printf("result = %.6f\n", fact(n)/fact(n-m));

    return 0;
}