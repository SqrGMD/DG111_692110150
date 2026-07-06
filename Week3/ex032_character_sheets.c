#include <stdio.h>
#include <ctype.h>

int main()
{
    int maxHp, currentHp, atk, def, level;
    char name[100];

    printf("== Create Your Character ==\n");

    printf("Your Character name : ");
    scanf("%99s", name);

    printf("Max HP : ");
    scanf("%d", &maxHp);

    printf("Attack Power : ");
    scanf("%d", &atk);

    printf("Defense : ");
    scanf("%d", &def);

    printf("Level : ");
    scanf("%d", &level);

    currentHp = maxHp;

    // convert name to uppercase
    for (int i = 0; name[i] != '\0'; i++)
        name[i] = toupper((unsigned char)name[i]);

    int percent = currentHp * 100 / maxHp;
    int blocks = percent / 10;

    printf("=== CHARACTER SHEET ===\n");
    printf("╔══════════════════════════════╗\n");

    printf("║ %-28s ║\n", name);
    printf("╠══════════════════════════════╣\n");

    printf("║ Level : %-20d ║\n", level);
    printf("║ HP    : %-3d / %-13d ║\n", currentHp, maxHp);
    printf("║ ATK   : %-20d ║\n", atk);
    printf("║ DEF   : %-20d ║\n", def);

    printf("╠══════════════════════════════╣\n");

    printf("║ HP Bar: [");
    for (int i = 0; i < 10; i++)
    {
        if (i < blocks)
            printf("█");
        else
            printf(" ");
    }

    printf("] %-8d%%  ║\n", percent);

    printf("╚══════════════════════════════╝\n");

    return 0;
}