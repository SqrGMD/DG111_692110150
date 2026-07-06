#include <stdio.h>
int main()
{
    int age;
    float gpa;
    char name[100], subject[100];

    printf("== Input Your Personal Information ==\n");
    printf("Your name : ");
    scanf("%s", &name);
    printf("Your age : ");
    scanf("%d", &age);
    printf("GPA : ");
    scanf("%f", &gpa);
    printf("Major : ");
    scanf("%s", &subject);

    printf("=== PERSONAL CARD ===\n");
    printf("┌──────────────────────────┐\n");
    printf("│ Name  : %-16s │\n", name);
    printf("│ Age   : %-5d years old  │\n", age);
    printf("│ GPA   : %-16.2f │\n", gpa);
    printf("│ Major : %-16s │\n", subject);
    printf("└──────────────────────────┘\n");

    return 0;
}