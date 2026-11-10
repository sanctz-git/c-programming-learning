#include <stdio.h>
int main()
{
    char tok[32];
    int st[1005];
    int top = 0;
    while (scanf("%s", tok) != EOF)
    {
        if (tok[0] >= '0' && tok[0] <= '9')
        {
            int term = 0;
            for (int i = 0; tok[i] != '\0'; i++)
                term = term * 10 + (tok[i] - '0');
            st[++top] = term;
        }
        else
        {
            int b = st[top--];
            int a = st[top--];
            switch (tok[0])
            {
            case '+':
                st[++top] = a + b;
                break;
            case '-':
                st[++top] = a - b;
                break;
            case '*':
                st[++top] = a * b;
                break;
            case '/':
                st[++top] = a / b;
                break;
            }
        }
    }
    printf("%d\n", st[top]);

    return 0;
}