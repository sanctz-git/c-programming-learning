#include <stdio.h>

int main() 
{
    char c[80], ch;
    int i = 0;

    while((ch = getchar()) != '\n' && ch != EOF)
        {
            c[i] = ch;
            i++;
        }
    int n = i;
    
    for(i = n-1; i >= 0; i--)
        {
            printf("%c", c[i]);
        }
    printf("\n");
    
    return 0;
}