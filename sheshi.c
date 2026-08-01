#include<stdio.h>
int main()
{
    double C;
    int F;
    
    scanf("%d", &F);

    C = 5.0*(F-32)/9;

    printf("Celsius = %d\n", (int)C);

    return 0;
}