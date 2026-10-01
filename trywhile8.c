#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if (N==1)
    {
        printf("1\n");
        return 0;
    }
    
    int sum = 1, count = 2, term1 = 1, term2 = 0;

    do
    {
        sum += term1;
        int t = term1;
        term1 = term1 + term2;
        term2 = t;
        count++;
    } while (sum < N);
    printf("%d\n",count);

    return 0;
}