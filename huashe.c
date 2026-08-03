#include<stdio.h>
int main()
{
    double lower, upper;
    scanf("%lf %lf", &lower, &upper );

    if (lower <= upper && upper <= 100)
    {   
        printf("fahr celsius\n");
        for (int fahr  = lower; fahr <= upper; fahr += 2)
        {   double celsius = 5.0 * (fahr -32) / 9.0;
            printf("%d   %-6.1f\n",fahr, celsius);
            /* code */
        }
        
        /* code */
    }else
    {   printf("Invalid.\n");
        /* code */
    }

    return 0;
    
}