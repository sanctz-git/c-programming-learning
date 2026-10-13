#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int d[6][6];

    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                {
                    scanf("%d", &d[i][j]);
                }
        }
    if (m >= n)
    {
        m%=n;
    }
    

    for(int i = 0; i < n; i++)
        {
            int j = n-m;
            if (j == n)
                {
                    j=0;
                }
            for(int k = 0; k < n; k++)
                {
                    printf("%d ", d[i][j]);
                    j++;
                    if (j == n)
                    {
                        j = 0;
                    }
                }
            printf("\n");
        }
    return 0;
}