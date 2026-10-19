#include<stdio.h>
int main()
{
    int d[10][10] = {0};
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int f = 1;
        int n;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &d[j][k]);
            }
            
        }
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (d[j][k] != 0) 
                {
                    f = 0;
                    break;
                }
            }
            if(!f) break;
        }
        if (!f)
        {
            printf("NO\n");
        }else printf("YES\n");
        
    }
    
    return 0;
}