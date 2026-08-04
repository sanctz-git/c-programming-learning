#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d月有31天\n",m);
        break;
    case 2:
        printf("%d月有28天\n",m);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d月有30天\n",m);
        break;

    default:
        printf("无效的月份\n");
        break;
    }
    return 0;
}