#include <stdio.h>
int main()
{
    int year, count = 0;
    scanf("%d", &year);

    if (year <=2000 || year > 2100)
    {    printf("Invalid year!\n");
        /* code */
    }else
    {
    for (int i = 2004; i <= year; i++)
    {   if (i%4 == 0 && i%100 != 0 || i%400 == 0)
    {   printf("%d\n", i);
        count++;
        /* code */
    }
        /* code */
    }
    
    if (count == 0)
    {   printf("None\n");
        /* code */
    }
    
    }
    
    return 0;
}   