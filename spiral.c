#include <stdio.h>
int main()
{
    int a[21][21];
    int n;
    scanf("%d", &n);
    if (n == 1){printf("1\n"); return 0;}
    int top = 1, bottom = n, left = 1, right = n;
    int term = 1;
    while (term <= n * n)
    {
        for (int j = left; j <= right; j++) a[top][j] = term++;
        top ++;

        for (int i = top; i <= bottom; i++) a[i][right] = term++;
        right--;

        if (top <= bottom)
            for (int j = right; j >= left; j--) a[bottom][j] = term++;
        bottom--;

        if (left <= right)
            for (int i = bottom; i >= top; i--) a[i][left] = term++;
        left++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}