#include <stdio.h>

int main(void)
{
    int score;
    float GPA;
    const char *grade;
    const char *result = "PASS";

    printf("\n--- 📝 Grade Calculator 📊 ---\n");
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score >= 80)
        grade = "A", GPA = 4.0;
    else if (score >= 75)
        grade = "B+", GPA = 3.5;
    else if (score >= 70)
        grade = "B", GPA = 3.0;
    else if (score >= 65)
        grade = "C+", GPA = 2.5;
    else if (score >= 60)
        grade = "C", GPA = 2.0;
    else if (score >= 55)
        grade = "D+", GPA = 1.5;
    else if (score >= 50)
        grade = "D", GPA = 1.0;
    else
    {
        grade = "F";
        GPA = 0.0;
        result = "FAIL";
    }

    printf("Grade: %s (%.1f) - %s\n", grade, GPA, result);

    return 0;
}