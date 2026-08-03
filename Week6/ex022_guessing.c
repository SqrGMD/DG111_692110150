#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("=== Number Guessing Game! ===\n");

    do
    {
        printf("What is the number in My mind? : ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target)
        {
            printf("Too low! ⬇️\n");
        }
        else if (guess > target)
        {
            printf("Too high! ⬆️\n");
        }
        else
        {
            printf("Correct! 🎊 You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}