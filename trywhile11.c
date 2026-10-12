#include<stdio.h>
int main()
{
    int result, num;
    char op;
    scanf("%d", &result);

    while (1)
    {
        scanf("%c", &op);
        if (op == '=')
        {
            break;
        }
        scanf("%d", &num);
        if (num == 0 && op == '/')
        {
            printf("ERROR\n");
            return 0;
        }
        switch (op)
        {
        case '+':
            result += num;
            break;
        case '-':
            result -= num;
            break;
        case '*':
            result *= num;
            break;
        case '/':
            result /= num;
            break;
        
        default:
            printf("ERROR\n");
            return 0;
        }
        
    }
    printf("%d\n", result);

    return 0;
}