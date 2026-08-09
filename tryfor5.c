#include<stdio.h>
int main()
{
    int N;
    double sum = 0;
    scanf("%d", &N);
    int sign = 1;

    for (int i = 0; i < N; i++)
    {   sum += sign * 1.0/(3*i + 1);
        sign = -sign;
        /* code */
    }

    printf("sum = %.3f\n", sum);

    return 0;
    
}