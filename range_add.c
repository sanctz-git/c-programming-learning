#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long a[100005] = {0};
    int verm = 0;
    for (int i = 1; i <= n; i++)
    {
        int term;
        scanf("%d", &term);
        a[i] = term - verm;
        verm = term;
    }
    
    for (int i = 1; i <= m; i++)
    {
        int l, r, v;
        scanf("%d %d %d",&l, &r, &v);
        a[l] += v;
        a[r+1] -= v;
    }
    int first = 1;
    long long result = 0;

    for (int i = 1; i <= n; i++)
    {
        result += a[i];
        if (!first)
        {
            printf(" ");
        }
        printf("%lld", result);
        
    }
    printf("\n");
    
    return 0;
}