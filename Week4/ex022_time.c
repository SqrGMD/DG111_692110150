#include <stdio.h>

int main()
{
    printf("\n--- ⌛ Time Converter ⏳ ---\n");
    int seconds, minutes, hours, secs;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = seconds % 60;

    printf("Time: %02d : %02d : %02d seconds\n", hours, minutes, secs);

    return 0;
}
