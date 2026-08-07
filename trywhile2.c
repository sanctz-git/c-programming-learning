#include<stdio.h>
int main()
{
    int N, i = 1;
    double sum = 0;
    scanf("%d", &N);

    while (i <= N)
    {   sum += 1.0/(2*i - 1);
        i++;
        /* code */
    }

    printf("sum = %.6f\n", sum);

    return 0;
    
}