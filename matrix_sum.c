#include<stdio.h>

long long s[1005][1005] = {0};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int term;
            scanf("%d", &term);
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] +term;
        }
        
    }
    
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        long long sum = 0;
        sum = s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1];
        printf("%lld\n", sum);
    }
    
    return 0;
}