#include <stdio.h>

int main() {
    int r,N;
    scanf("%d %d", &r, &N);
    int c = 0,d;
    do 
    {
        scanf("%d", &d);
        if (d<0)
        {
            printf("Game Over\n");
            break;
        }else if (d<r)
        {
            c++;
            printf("Too small\n");
        }else if (d>r)
        {
            c++;
            printf("Too big\n");
        }
        if (d==r && c==0)
        {
            printf("Bingo!\n");
            break;
        }else if (d==r && c<=2)
        {
            printf("Lucky You!\n");
            break;
        }else if (d==r && c<=N-1)
        {
            printf("Good Guess!\n");
            break;
        }
        if (d!=r && c==N)
        {
            printf("Game Over\n");
            break;
        }
    } while (1);
    
    return 0;
}