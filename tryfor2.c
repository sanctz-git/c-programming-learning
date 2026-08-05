#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);
    int max = x;

    for (int i = 1; i < n; i++)
    {scanf("%d", &x);
       if (x > max)
       {max = x;
        /* code */
       }
    
    }
    printf("max = %d\n", max);

    return 0;
    
}