#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Character Status Display\n");

    int max_hp, hp, damage, attack_count;
    int poison_input;
    _Bool is_poisoned;

    printf("Max HP : ");
    scanf("%d", &max_hp);

    printf("Damage Taken : ");
    scanf("%d", &damage);

    printf("Poisoned (0/1) : ");
    scanf("%d", &poison_input);

    is_poisoned = poison_input;

    printf("Attack Count : ");
    scanf("%d", &attack_count);

    hp = max_hp - damage;

    if (hp < 0)
    {
        hp = 0;
    }

    int filled = hp * 10 / max_hp;

    printf("\n=== Character Status ===\n");

    printf("HP : [");
    for (int i = 0; i < 10; i++)
    {
        printf(i < filled ? "█" : "-");
    }
    printf("] %d/%d", hp, max_hp);

    if (hp <= 0)
    {
        printf("\nState: DEAD");
    }
    else if ((float)hp / max_hp < 0.25)
    {
        printf("\nState: ☢️ CRITICAL!");
    }
    else if (is_poisoned)
    {
        printf("\nState: ☠️ POISONED");
    }
    else
    {
        printf("\nState: NORMAL");
    }

    if (attack_count > 0 && attack_count % 5 == 0)
    {
        printf("\n🌟 Ultimate Ready! (Attack #%d)", attack_count);
    }

    return 0;
}