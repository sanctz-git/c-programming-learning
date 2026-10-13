#include <stdio.h>

int main() 
{
    int d[10], n;
    scanf("%d", &n);;
    for(int i = 0; i < n; i++)
        {
            scanf("%d", &d[i]);
        }

    for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
                {
                    if (d[i] < d[j])
                    {
                        int t = d[i];
                        d[i] = d[j];
                        d[j] = t;
                    }
                }
        }

    int first = 1;
    for(int i = 0; i < n; i++)
        {
            if (!first)
            {
                printf(" ");
            }
            printf("%d", d[i]);
            first = 0;
        }
    
    return 0;
}