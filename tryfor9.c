#include<stdio.h>
int main()
{
    int N, a = 1;
    double sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {   sum += a*(i*1.0/(2*i-1));
        a *= -1;
        /* code */
    }
    printf("%.3f\n", sum);

    return 0;
    
}