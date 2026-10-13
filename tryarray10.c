#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d[100], sum = 0;

    for (int i = 0; i < n*n; i++)
    {
        scanf("%d", &d[i]);
        sum += d[i];
    }

    for (int i = n-1; i <= n*(n-1) ; i+=n-1)
    {
        sum -= d[i];
    }
    
    for (int i = n*(n-1); i < n*n; i++)
    {
        sum -= d[i];
    }

    for (int i = n-1; i < n*n; i+=n)
    {
        sum -= d[i];
    }

    sum += d[n-1] + d[n*(n-1)] + d[n*n-1];
    printf("%d", sum);
    
    return 0;
}