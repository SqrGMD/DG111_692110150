#include <stdio.h>

int main()
{
    int n, divider;
    printf("==== Is this a prime number?! ====\n");
    printf("Enter a Positive Integer : ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is NOT a prime number.\n", n);
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            divider = i;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is NOT a prime number. (divisible by %d)\n", n, divider);
    }
    return 0;
}