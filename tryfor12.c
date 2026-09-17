#include<stdio.h>
int main()
{
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");

    int number;
    for (int i = 1; i <= 5; i++)
    {   scanf("%d", &number);
        if (number == 0)
        {   break;
            /* code */
        }
        

        switch (number)
        {
        case 1:
               printf("price = 3.00\n");
            /* code */
            break;
        case 2:
               printf("price = 2.50\n");
            /* code */
            break;
        case 3:
               printf("price = 4.10\n");
            /* code */
            break;
        case 4:
               printf("price = 10.20\n");
            /* code */
            break;
        
        default:
               printf("price = 0.00\n");
            break;
        }
        /* code */
    }
    return 0;
    
}