#include <stdio.h>
int main()
{
    int a[100005] = {0};
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p = a + n - 1;
    while (p >= a)
    {
        printf("%d", *p);
        p--;
    }
    
    return 0;
}