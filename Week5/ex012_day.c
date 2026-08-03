#include <stdio.h>

int main()
{
    printf("\n--- 📅 Day of the Week Calculator 🗓️ ---\n");
    int NumD;
    const char *Day;
    const char *result = "Weekday";

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &NumD);

    switch (NumD)
    {
    case 1:
        Day = "Monday";
        break;
    case 2:
        Day = "Tuesday";
        break;
    case 3:
        Day = "Wednesday";
        break;
    case 4:
        Day = "Thursday";
        break;
    case 5:
        Day = "Friday";
        break;
    case 6:
        Day = "Saturday", result = "Weekend! 🎊";
        break;
    case 7:
        Day = "Sunday", result = "Weekend! 🎊";
        break;
    default:
        printf("Invalid input!");
        return 1;
    }

    printf("%s (%s)\n", Day, result);

    return 0;
}