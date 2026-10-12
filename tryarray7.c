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
    int max = d[0];
    int gs = 0;

    for(int i=1 ; i < n ; i++)
        {
            if (d[i] > max)
            {
                max = d[i];
                gs = i;
            }
        }
    printf("%d %d\n", max, gs);

    return 0;
}