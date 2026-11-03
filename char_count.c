#include <stdio.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    char *p = s;
    int bigger = 0, lower = 0, other = 0, number = 0;
    while (*p != '\0')
    {
        if (*p >= 'a' && *p <= 'z') lower++;
        else if (*p >= 'A' && *p <= 'Z') bigger++;
        else if (*p >= '0' && *p <= '9') number++;
        else other++;
        p++;
    }
    
    printf("%d %d %d %d\n", bigger, lower, number, other);

    return 0;
}