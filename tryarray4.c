#include<stdio.h>
int main()
{
    int d[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (d[i] > d[j])
            {
                int t = d[i];
                d[i] = d[j];
                d[j] = t;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", d[i]);
        if (i < n-1)
        {
            printf(" ");
        }
        
    }
    printf("\n");
    
    return 0;
}