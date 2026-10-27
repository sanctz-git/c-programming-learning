#include<stdio.h>
int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int a[100005] = {0};

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= q; i++)
    {
        int x;
        scanf("%d", &x);
        int t = n/2;
        int left = 1, right = n;
        while (1)
        {
            if (x > a[n])
            {
                printf("-1\n");
                break;
            }
            
            if (a[t] >= x)
            {
                right = t;
                t = right/2;
                
            }
            else 
            {
                left = t + 1;
                t = (left + right)/2;
            }
            if (left >= right && left <= n)
            {
                printf("%d\n", right);
                break;
            }
            
        }
        
    }
    
    return 0;
}