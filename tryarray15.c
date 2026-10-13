#include<stdio.h>
int main()
{
    int n, cnt[10] = {0};
    scanf("%d", &n);
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch >= '0' && ch <= '9')
        {
            cnt[ch - '0']++;
        }
        
    }
    int max = 0;
    
    for (int i = 0; i < 10; i++)
    {
        if (cnt[i] > max)
        {
            max = cnt[i];
        }
        
    }
    printf("%d:", max);

    for (int i = 0; i < 10; i++)
    {
        
        if (cnt[i] == max)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");
    
    return 0;
}