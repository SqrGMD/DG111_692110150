#include <stdio.h>

int main()
{
    printf("\n=== ITEM SHOP ===\n");
    int gold, price, choice, remain;
    gold = 1000;
    printf("Gold = 1000\n\n");

    printf("1. Health Potion - 50 gold (+50 HP)\n");
    printf("2. Mana Potion - 80 gold (+30 MP)\n");
    printf("3. Iron Sword - 500 gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 gold (+15 DEF)\n");
    printf("5. Exit\n\n");
    printf("Select item : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        price = 50;
        if (gold >= price)
        {
            printf("\n=== Purchased ===\n");
            printf("Health Potion : 50 gold\n");
            remain = gold - price;
            printf("Remaining: %d gold\n", remain);
            printf("HP Bonus : +50\n");
        }
        break;
    case 2:
        price = 80;
        if (gold >= price)
        {
            printf("\n=== Purchased ===\n");
            printf("Mana Potion : 80 gold\n");
            remain = gold - price;
            printf("Remaining: %d gold\n", remain);
            printf("MP Bonus : +30\n");
        }
        break;

    case 3:
        price = 500;
        if (gold >= price)
        {
            printf("\n=== Purchased ===\n");
            printf("Iron Sword : 500 gold\n");
            remain = gold - price;
            printf("Remaining: %d gold\n", remain);
            printf("ATK Bonus : +20\n");
        }
        break;
    case 4:
        price = 300;
        if (gold >= price)
        {
            printf("\n=== Purchased ===\n");
            printf("Leather Armor : 300 gold\n");
            remain = gold - price;
            printf("Remaining : %d gold\n", remain);
            printf("DEF Bonus : +15\n");
        }
        break;
    case 5:
        return 1;
        break;
    default:
        printf("Invalid input!");
        return 1;
        break;
    }

    return 0;
}