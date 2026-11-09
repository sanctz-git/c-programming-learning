#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[100005], sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    int max = a[0], min = a[0], *p = a;

    while (p < a + N)
    {
        if (max < *p) max = *p;
        if (min > *p) min = *p;
        p++;
    }
    printf("average = %.2f\n", (double)sum / N);
    printf("max = %.2f\n", (double)max);
    printf("min = %.2f\n", (double)min);
    
    return 0;
}