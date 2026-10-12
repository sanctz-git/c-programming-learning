#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d[10];
    for(int i=0 ; i < n ; i++)
        {
            scanf("%d", &d[i]);
        }
    for(int i=n-1 ; i>=0 ; i--)
        {
            printf("%d", d[i]);
            if (i > 0)
            {
                printf(" ");
            }
        }
    
    return 0;
}