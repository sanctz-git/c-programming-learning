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
    int N, sum = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {   sum += fact(i);
        /* code */
    }

    printf("%d\n", sum);
    return 0;

}