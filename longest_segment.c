#include<stdio.h>
int main()
{
    int n, S;
    scanf("%d %d", &n, &S);
    int a[100005] ={0};

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int l = 1, r = 1, result = 1, t = 1;
    long long sum = 0;
    for ( r = 1; r <= n; r++)
    {
        sum += a[r];
        if (sum > S)
        {
            for (l = t; l < r; l++)
            {
            sum -= a[l];
                if (sum <= S)
                {
                    if (result < r - l) result = r - l;
                    t = l;
                    break;
                }
            }
        }
        
    }
    printf("%d\n", result);
    
    return 0;
}