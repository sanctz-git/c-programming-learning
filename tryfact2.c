#include<stdio.h>
#include<math.h>
double fact(int n)
{
    double result = pow(n,2) + 1.0/n;

    return result;
}

int main()
{
    int m, n;
    double sum = 0;
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++)
    {   sum += fact(i);
        /* code */
    }

    printf("sum = %.6f\n", sum);

    return 0;
    
}