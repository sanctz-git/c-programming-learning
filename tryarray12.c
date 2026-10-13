#include <stdio.h>

int main() 
{
    char c[80] = {0}, ca, ch;
    scanf("%c", &ca);
    int num = -1;
    getchar();
    int i = 0;

    while((ch = getchar()) != '\n' && ch != EOF)
        {
            c[i] = ch;
            i++;
        }
    int n = i+1;
    
    for(i = 0; i < n ; i++)
        {
            if (c[i] == ca && num < i)
            {
                num = i;
            }
        }

    if (num == -1)
    {
        printf("Not Found\n");   
    }else
    {
        printf("index = %d\n", num);
    }
    
    return 0;
}