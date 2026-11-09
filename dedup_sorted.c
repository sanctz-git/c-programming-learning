#include <stdio.h>
int main()
{
    int n, a[1000005] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *f = a + 1;
    int *s = a;

    while (f <= a + n)
    {
        if (*f != *s)
        {
            s++;
            *s = *f;
        }
        f++;
    }
    printf("%d", (int)(s - a));
    for (int i = 1; i <= (int)(s - a); i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}