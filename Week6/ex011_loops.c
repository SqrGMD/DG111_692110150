#include <stdio.h>

int main()
{
    int method, sum = 0;

    printf("\n=== Loops ===\n");

    printf("Method 1: Using 'for loop'\n");
    printf("Method 2: Using 'while loop'\n");
    printf("Method 3: Using 'do-while loop'\n\n");
    printf("*** The result would all be the same ***\n\n");

    printf("Select a method (1-3): ");
    scanf("%d", &method);

    switch (method)
    {

    case 1:
    {
        printf("Method 1: Using a for loop\n");
        for (int I = 1; I <= 10; I++)
        {
            sum += I;
        }
        printf("Sum = %d\n", sum);
    }
    break;

    case 2:
    {
        printf("Method 2: Using a while loop\n");
        int I = 1;
        while (I <= 10)
        {
            sum += I;
            I++;
        }
        printf("Sum = %d\n", sum);
    }
    break;

    case 3:
    {
        printf("Method 3: Using a do-while loop\n");
        int I = 1;
        do
        {
            sum += I;
            I++;
        } while (I <= 10);
    }
        printf("Sum = %d\n", sum);
        break;
    default:
        printf("Can't you just pick 1-3?\n");
        break;
    }
}