#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n < 0)
    {printf("Invalid Value!\n");
        /* code */
    }else if (n <= 50)
    {   printf("cost = %.2f\n", n*0.53);
        /* code */
    }else
    {   printf("cost = %.2f\n", 50*0.53 + (n - 50) * (0.53 + 0.05));
        /* code */
    }
    
    return 0;
    
    
}