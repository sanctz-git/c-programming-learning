#include<stdio.h>
#include<math.h>
int main()
{
    int N, i=0;
    scanf("%d", &N);
    
    do
    {   printf("pow(3,%d) = %.0f\n", i, pow(3,i));

        i++;
        /* code */
    } while (i <= N);
    
    return 0;
}