#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d", &N);

    for (int i = pow(10,N-1); i < pow(10,N); i++)
    {   
        int t=i, sum = 0;
        while ( t>0 )
        {   int d = t%10;
            t /= 10;
            sum += pow(d,N);
            /* code */
        }
        if (sum == i)
        {   printf("%d\n",i);
            /* code */
        }
        
        /* code */
    }
    
    return 0;
}