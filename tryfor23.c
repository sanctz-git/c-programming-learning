#include <stdio.h>
int ry(int n)
{
    int result = 0;
    if (n%4 == 0 && n%100 != 0 || n%400 == 0) 
    {result = 1;}
    return result;
}
int main()
{
    int year, month, day;
    int dayNumber = 0;
    scanf("%d/%d/%d", &year, &month, &day);

    for(int i = 1; i < month; i++)
        {
            switch (i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12: dayNumber += 31; break;
                case 4:
                case 6:
                case 9:
                case 11: dayNumber += 30; break;
                case 2: 
                    if (ry(year) == 1) 
                    {
                        dayNumber += 29; break;
                    }else
                    {dayNumber += 28; break;}
                    
            }
        }
    dayNumber += day;
    printf("%d", dayNumber);

    return 0;
}