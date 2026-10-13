#include <stdio.h>
int main()
{
    int M, m[20];
    scanf("%d", &M);
    for(int i=0 ; i < M ; i++)
        {
            scanf("%d", &m[i]);
        }
    int N, n[20];
    scanf("%d", &N);
    for(int i=0 ; i < N ; i++)
        {
            scanf("%d", &n[i]);
        }
        int first = 1;
    
    for(int i=0 ; i < M ; i++)
        {
            int found = 0;
            for (int j = 0; j < N; j++)
            {
                if (m[i] == n[j])
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                continue;
            }

            int dup = 0;
            for (int k = 0; k < i; k++)
            {
                if (m[k] == m[i])
                {
                    dup = 1;
                    break;
                }
            }
            if (dup)
            {
                continue;
            }
            if (!first)
            {
                printf(" ");
            }
            printf("%d", m[i]);
            first = 0;
        }

    for(int i=0 ; i < N ; i++)
        {
            int found = 0;
            for (int j = 0; j < M; j++)
            {
                if (n[i] == m[j])
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                continue;
            }

            int dup = 0;
            for (int k = 0; k < i; k++)
            {
                if (n[k] == n[i])
                {
                    dup = 1;
                    break;
                }
            }
            if (dup)
            {      continue; }
            if (!first)
            {
                printf(" ");
            }
            printf("%d", n[i]);
            first = 0;
        }
    
    return 0;
}