#include <stdio.h>

int main()
{
    printf("\n=== Nested Loops ===\n");
    int rows = 3, cols = 5, count = 1;

    for (int i = 1; i <= rows; i++)
    {
        printf("+----+----+----+----+----+\n");
        printf("| ");
        for (int j = 1; j <= cols; j++)
        {
            printf("%2d | ", count++);
        }
        printf("\n");
    }

    printf("+----+----+----+----+----+\n");
    return 0;
}