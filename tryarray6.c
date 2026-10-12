#include <stdio.h>
#include <ctype.h>
int main()
{
    int n =0;
    char d[1005];
    char ch;

    while((ch = getchar()) != '\n' && ch != EOF)
        {
            d[n] = ch;
            n++;
        }
    for(int i = 0 ; i < n ; i++)
        {
            if (i == 0 || d[i-1] == ' ')
            {
                printf("%c", toupper(d[i]));
            }
            else
            {
                printf("%c", d[i]);
            }
        }
    printf("\n");

    return 0;
}