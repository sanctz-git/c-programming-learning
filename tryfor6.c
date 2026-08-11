#include<stdio.h>
int main()
{
    int N, a = 1;
    scanf("%d", &N);
    for (int i = 2; i < N; i++)
    {   a = 1;

        for (int b = 2; b < i; b++)
        {  
            if (i % b == 0)
        {   a = 0;
            break;
            /* code */
        }
       
        /* code */
    }
     
        if (a == 1)
        {   printf("%d ", i);
            /* code */
        }
        
        /* code */
    }
    printf("\n");

    return 0;
}