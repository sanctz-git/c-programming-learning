#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n%2 == 0)
    {
        return 0;
    }
    
    int a = (n+1)/2, b = (n-1)/2;

    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a-i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2*i-1 ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("* ");
    }
    printf("\n");
    
    for (int i = b; i >= 1; i--)
    {
        for (int j = 1; j <= a-i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2*i-1 ; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}