#include <stdio.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    char *fast = s+1;
    char *slow = s;

    while (*fast != '\0')
    {
        if (*fast != *slow)
        {
            slow++;
            *slow = *fast;
        }
        fast++;
    }
    *(slow+1) = '\0';

    printf("%d ", slow + 1 -s);
    printf("%s\n", s);

    return 0;
}