#include <stdio.h>
#include <math.h>

int main()
{
    int attack, defense, hit_number, Damage;
    int enemy_hp = 500;
    printf("\n=== COMBAT SIMULATOR! ===\n");
    printf("THE EVIL SQUARE HP = %d\n\n", enemy_hp);

    printf("┌──────────────────────────┐\n");
    printf("│ %-24s │\n", "THE EVIL SQUARE");
    printf("│ %-24s │\n", "");
    printf("│ %-24s │\n", "HP");
    printf("│ %-24d │\n", enemy_hp);
    printf("└──────────────────────────┘\n\n");
    printf("Player Attack: ");
    scanf("%d", &attack);
    printf("Enemy Defense: ");
    scanf("%d", &defense);
    printf("Hit Number: ");
    scanf("%d", &hit_number);

    Damage = (attack - defense) * hit_number;

    if (Damage < 0)
        Damage = 0;

    if (hit_number % 5 == 0)
    {
        Damage = (int)ceil(Damage * 1.5);
        printf("Damage = %d *** CRITICAL HIT! x1.5 ***\n\n", Damage);
    }
    else
    {
        printf("Damage = %d (Normal)\n\n", Damage);
    }

    enemy_hp -= Damage;

    if (enemy_hp < 0)
        enemy_hp = 0;

    if (enemy_hp == 0)
    {
        printf("THE EVIL SQUARE HP = 0 \n");
        printf("*** YOU DEFEATED THE EVIL SQUARE! ***\n");
    }
    else
    {
        printf("┌──────────────────────────┐\n");
        printf("│ %-24s │\n", "THE EVIL SQUARE");
        printf("│ %-24s │\n", "");
        printf("│ %-24s │\n", "HP");
        printf("│ %-24d │\n", enemy_hp);
        printf("└──────────────────────────┘\n\n");

        printf("*** THE EVIL SQUARE IS STILL ALIVE! 😈 ***\n");
    }

        return 0;
}