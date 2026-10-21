#include<stdio.h>
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    long long s[100005] = {0};

    for (int i = 1; i <= n; i++)
    {
        int trem;
        scanf("%d", &trem);
        s[i] = s[i-1] + trem;
    }

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        long long sum = s[r] - s[l-1];
        printf("%lld\n", sum);
    }

    return 0;
}