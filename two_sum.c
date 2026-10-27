#include<stdio.h>
int main()
{
    int n, S;
    scanf("%d %d", &n, &S);
    int a[100005] = {0};

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int l = 1, r = n;
    int pp = 0;
    while (l < r)
    {
        if (a[l] + a[r] == S)
        {
            pp = 1;
            break;
        }
        else if (a[l] + a[r] > S) r--;
        
        else l++;
    }
    if (pp) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}