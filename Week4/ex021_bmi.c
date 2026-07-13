#include <stdio.h>

int main()
{
    int height_cm, weight_kg;
    float height_m, bmi;

    printf("\n--- BMI Calculator ---\n");
    printf("Enter your height (cm): ");
    scanf("%d", &height_cm);
    printf("Enter your weight (kg): ");
    scanf("%d", &weight_kg);

    height_m = height_cm / 100.0;
    bmi = weight_kg / (height_m * height_m);

    if (bmi < 18.5)
    {
        printf("BMI: %.2f -> Underweight 🥺\n", bmi);
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("BMI: %.2f -> Normal 😁\n", bmi);
    }
    else if (bmi > 24.9 && bmi <= 29.9)
    {
        printf("BMI: %.2f -> Overweight 😐\n", bmi);
    }
    else
    {
        printf("BMI: %.2f -> Obese 🤯\n", bmi);
    }

    return 0;
}