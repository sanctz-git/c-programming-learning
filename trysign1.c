#include<stdio.h>
double sign(int n)
{   
    int result;
    if (n > 0)
    {   result = 1;
        /* code */
    }else if (n < 0)
    {   result = -1;
        /* code */
    }else
    {   result = 0;
        /* code */
    }
    return result;
    
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("sign(%d) = %.0f\n", n, sign(n));

    return 0;
}