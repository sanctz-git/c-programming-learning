#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum = 1;

    for (int i = 1; i <= N-1; i++)
    {
        sum = (sum + 1) * 2;
    }
    printf("%d\n",sum);

    return 0;
}