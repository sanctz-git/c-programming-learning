#include<stdio.h>
double fact(int n)
{   double result = 1.0;
    for (int i = 1; i <= n; i++)
    {   result *= i;
        /* code */
    }
    return result;
    
}
int main()
{
    int N;
    scanf("%d", &N);
    double sum = 0;

    for (int i = 1; i <= N; i++)
    {   sum += fact(i);
        /* code */
    }

    printf("%.0f\n", sum);

    return 0;
    
}