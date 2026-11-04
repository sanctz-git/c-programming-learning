#include <stdio.h>
int *bsearch(int *a, int n, int x)
{
    int l = 0, r = n-1;
    while (l <= r)
    {
        int mid =(l + r) / 2;
        if (a[mid] == x) return &a[mid];
        else if (a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return NULL;
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int a[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *p = bsearch(a, n, x);
    if (p == NULL) printf("-1\n");
    else printf("%d", (int)(p - a));
    
    return 0;
}