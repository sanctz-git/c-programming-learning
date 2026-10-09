#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d[n], pos = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d[i]);
    }

    int max = d[0];

    for (int i = 0; i < n; i++)
    {
        if (d[i] > max)
        {
            max = d[i];
            pos = i + 1;
        }
    }
    printf("%d %d",max, pos);
    
    return 0;
}