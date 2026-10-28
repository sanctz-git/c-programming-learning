#include <stdio.h>

int a[100005];
int st[100005]; 
int ans[100005];   

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        ans[i] = -1;
    }
    int top = 0;

    for (int i = 1; i <= n; i++)
    {
        while (top > 0 && a[st[top]] < a[i])
        {
            ans[st[top]] = a[i];
            top--;
        }
        st[++top] = i;
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d", ans[i]);
        if (i < n) printf(" ");
    }
    printf("\n");

    return 0;
}