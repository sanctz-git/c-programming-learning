#include<stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c %d",&a, &op, &b);

    switch ( op )
    {
    case '+':
        printf("%d + %d = %d\n",a ,b ,a+b);
        break;
    case '-':
        printf("%d - %d = %d\n",a ,b ,a-b);
        break;
    case '*':
        printf("%d * %d = %d\n",a ,b ,a*b);
        break;
    case '/':
        if (b == 0)
        {printf("除数不能为0\n");
            /* code */
        }else
        {printf("%d / %d = %.2f\n",a ,b ,(double)a/b);
            /* code */
        }
        break;
    default:
        printf("无效的运算符\n");
        break;
    }

    return 0;
}