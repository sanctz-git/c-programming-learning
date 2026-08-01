#include<stdio.h>

int main()
{
    int AMOUNT = 100;
    int price = 0;

    printf("请输入金额（元）: ");
    scanf("%d", &price); 

    printf("请输入票面: ");
    scanf("%d", &AMOUNT);

    int change = AMOUNT - price ;

    printf("找您%d元。\n",change);

    return 0;
}