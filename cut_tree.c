#include <stdio.h>
int h[100005] = {0};
int n, m;
    
int check(int H)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (h[i] > H) sum += h[i] - H;
        if (sum >= m) return 1;
    }
    return 0;
}


int main()
{
    scanf("%d %d", &n, &m);
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &h[i]);
        if (max < h[i] ) max = h[i];
    }
    int left = 0, right = max, result = 0;

    while (left <= right)
    {
        int  mid = (left + right) / 2;
        if (check(mid))
        {
            result = mid;
            left = mid + 1;
            mid = (left + right) / 2;
        }else right = mid - 1;
        
    }
    printf("%d", result);

    return 0;
}