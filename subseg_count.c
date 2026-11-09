#include <stdio.h>
long long s[100005] = {0};
int main()
{
    int N, S;
    scanf("%d %d", &N, &S);
    for (int i = 1; i <= N; i++)
    {
        int term;
        scanf("%d", &term);
        s[i] = s[i - 1] + term;
    }
    int l = 1, r;
    long long count = 0;
    for (r = 1 ; r <= N; r++)
    {
        while (s[r] - s[l-1] > S) l++;
        
        count += r - l + 1;
    }
    
    printf("%lld\n", count);

    return 0;
}