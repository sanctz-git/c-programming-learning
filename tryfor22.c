#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    double sum = 0.0, term = 2.0;

    for (int i = 1; i <= N; i++)
    {
        sum += term;
        term = (term + 1)/term;
        /* code */
    }
    printf("%.2f\n", sum);

    return 0;
}