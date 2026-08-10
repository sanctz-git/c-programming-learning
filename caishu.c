#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int a = rand();
    printf("我现在已经想好了一个0-100的数，来猜猜看吧\n");
    a %= 100;
    int i, n=0;

    do
    {   scanf("%d", &i);
        if (i > a)
        {printf("你猜的数大了\n");
            /* code */
        }else if (i < a)
        {printf("你猜的数小了\n");
            /* code */
        }
        n++;
        /* code */
    } while (i != a);

    printf("恭喜你猜对了，一共猜了%d次\n", n);

    return 0;
}
    