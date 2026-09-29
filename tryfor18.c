#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    double term = 2.0, sum = 0;
    
    for (int i = 1; i <= N; i++)
    {
        sum += term;
        term = (1 + term)/term;
        /* code */
    }
    printf("%.2f\n", sum);

    return 0;
}