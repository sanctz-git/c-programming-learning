#include<stdio.h>
int main()
{
    int cnt[10] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d" , &x);
        cnt[x]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d:%d\n", i, cnt[i]);
    }
    
    return 0;
}