#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   int a, b ,c;
        scanf("%d %d %d",&a ,&b ,&c);
        
        printf("%d\n",a ^ b ^ c );
        
        
        /* code */
    }
    return 0;
    
}
