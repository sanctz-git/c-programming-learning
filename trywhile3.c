#include<stdio.h>
int main()
{
    int N, i=0;
    double sum = 0;
    int sign = 1;
    scanf("%d", &N);

    while (i < N)
    {   sum += sign*1.0 / (3*i + 1);
        sign = -sign;
        i++;
        /* code */
    }

    printf("sum = %.3f\n", sum);

    return 0;
}