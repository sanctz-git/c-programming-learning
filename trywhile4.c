#include<stdio.h>
#include<math.h>
int main()
{
    int N, i = 0;
    scanf("%d", &N);

    while (i <= N)
    {   printf("pow(3,%d) = %.0f\n", i, pow(3,i));
        i++;
        /* code */
    }
    return 0;
}