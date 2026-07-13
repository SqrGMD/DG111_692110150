#include <stdio.h>

int main()
{
    printf("\n--- 1.1 Integer Division & Modulo ---\n");
    printf("1. Expression : 10 / 3 = %d\n", 10 / 3);
    printf("2. Expression : 10.0 / 3.0 = %f\n", 10.0 / 3.0);
    printf("3. Expression : (float)10 / 3.0 = %f\n", (float)10 / 3.0);
    printf("4. Expression : 10 % 3 = %d\n", 10 % 3);
    printf("5. Expression : -7 % 3 = %d\n", -7 % 3);
    printf("6. Expression : 7 % -3 = %d\n\n", 7 % -3);

    printf("\n--- 1.2 Increment/Decrement ---\n");
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n\n", x);

    printf("\n--- 1.3 — Precedence Test ---\n");
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2 * 3 + 4 *5 = %d\n", 2 * 3 + 4 * 5);

    return 0;
}