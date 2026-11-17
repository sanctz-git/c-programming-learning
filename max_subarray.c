#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[100005];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    
    long long cur = a[0], ans = a[0];
    for (int i = 1; i < N; i++)
    {
        cur = (a[i] > a[i] + cur) ? a[i] : a[i] + cur;
        if (cur > ans) ans = cur;
        
    }
    printf("%lld\n", ans);

    return 0;
}