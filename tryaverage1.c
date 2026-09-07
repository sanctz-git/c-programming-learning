#include<stdio.h>
int main()
{
    int n;
    int score;
    int sum = 0;
    int count = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   scanf("%d", &score);
        sum += score;
        /* code */
        if (score >= 60)
        {   count ++;
            /* code */
        }
        
    }

    double average = (double)sum/n;

    printf("average = %.1f\n", average);
    printf("count = %d\n", count);

    return 0;
}