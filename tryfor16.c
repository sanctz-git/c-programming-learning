#include<stdio.h>
int main()
{
    int M , N;
    scanf("%d %d", &M, &N);
    int s = 0 , sum = 0;
    for (int i = M; i <= N; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            int t = i%j;
            if (t == 0)
            {
                isPrime = 0;
                break;
                /* code */
            }
        }
         if (isPrime)
            {
                 sum += i;
                 s++;
                /* code */
            }
        
        /* code */
    }
    printf("%d %d\n", s, sum);

    return 0;
    
}