#include <stdio.h>

int main()
{
    int gold = 1000;
    int price, choice;
    int total = 0;
    int boughtSword = 0, boughtArmor = 0;

    printf("\n=== WELCOME TO MICKEY MOUSE ITEM SHOP! ===\n");
    printf("                    _..-----._\n"
           "                  .'          '.\n"
           "                 /              \\\n"
           "                |                ;\n"
           "                |                 |\n"
           "                \\                 |\n"
           "                 \\               ;\n"
           "           _..----'             /\n"
           "         .`-. .-'``'-.       .-'\n"
           "       .'_   `  _     '.    `'.\n"
           "      /  _`    _ `      \\      \\     _...._\n"
           "   _  | /  \\  /  \\      |       | .-'      `'.\n"
           "  / \\ | | /|  | /|      |       ;'            \\\n"
           " |  |_\\ \\_|/  \\_|/      /                      ;\n"
           " .\\_/  `'-.            /_...._                 |\n"
           "/          `                  `\\               |\n"
           "|                        __     |             /\n"
           " \\                       / `   //'.         .'\n"
           "  '._                  .'     .'   `'-...-'\n"
           "     `\"'-.,__    ___.-'    .-'\n"
           "     `-._````  __..--'`\n"
           "             ``````\n");
    printf("Ha Ha! Is Mickey Mouse! What do you want?!\n\n");
    printf("Gold: 1,000\n");
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Checkout\n\n");

    do
    {

        printf("Select item: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            price = 50;

            if (total + price > gold)
                printf("Not enough gold!\n\n");
            else
            {
                total += price;
                printf("Added Health Potion to cart.\n\n");
            }
            break;

        case 2:
            price = 80;

            if (total + price > gold)
                printf("Not enough gold!\n\n");
            else
            {
                total += price;
                printf("Added Mana Potion to cart.\n\n");
            }
            break;

        case 3:
            price = 500;

            if (total + price > gold)
                printf("Not enough gold!\n\n");
            else
            {
                total += price;
                boughtSword = 1;
                printf("Added Iron Sword to cart.\n\n");
            }
            break;

        case 4:
            price = 300;

            if (total + price > gold)
                printf("Not enough gold!\n\n");
            else
            {
                total += price;
                boughtArmor = 1;
                printf("Added Leather Armor to cart.\n\n");
            }
            break;

        case 5:
            break;

        default:
            printf("Mickey Mouse doesn't understand!\n");
        }

    } while (choice != 5);

    printf("=== Checkout ===\n");

    if (boughtSword && boughtArmor)
    {
        total = total * 90 / 100;
        printf("Warrior Bundle! (-10%%)\n");
    }

    printf("Total Paid: %d Gold\n", total);
    printf("Remaining : %d Gold\n\n", gold - total);

    printf("         .-\\\"\\\"\\\"-.\n"
           "        /       \\\n"
           "        \\       /\n"
           " .-\\\"\\\"\\\"-.-`.-.-.<  _\n"
           "/      _,-\\ ()()_/:)\n"
           "\\     / ,  `     `|\n"
           " '-..-| \\-.,___,  /\n"
           "       \\ `-.__/  /\n"
           "  mic   `-.__.-'`\n\n");
    printf("Thank you C0ME Again!\n");

    return 0;
}