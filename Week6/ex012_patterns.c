#include <stdio.h>

int main()
{
    printf("Pattern 1: Half Triangle\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int n = 1; n <= i; n++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("Pattern 2: Square\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("Pattern 3: Diamond\n");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 2; i >= 1; i--)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}