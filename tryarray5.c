#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    
    while((ch = getchar()) != '\n')
        {
            if (ch >= '0' && ch <= '9')
            {
                printf("%c", ch);
                continue; 
            }
            
            if (ch == 'Z')
            {
                printf("a");
            }
            else if (ch == 'z')
            {
                printf("A");
                continue;
            }
            
            if (isalpha(ch)) 
            {
                ch++;
            
            if (ch >= 'a' && ch <= 'z')
            {
                printf("%c", toupper(ch));
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                printf("%c", tolower(ch));
            }
            }
            else
            {
                printf("%c", ch);
            }
        }
    printf("\n");

    return 0;
}