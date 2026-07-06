#include <stdio.h>
int main()
{
    int MaxHp, Atk, Def, Level;
    char name[100];

    printf("== สร้างตัวละคร ==\n");
    printf("Your Character name : ");
    scanf("%s", name);
    printf("Max HP : ");
    scanf("%d", &MaxHp);
    printf("Attack Power : ");
    scanf("%d", &Atk);
    printf("Defense : ");
    scanf("%d", &Def);
    printf("Level : ");
    scanf("%d", &Level);

    printf("== สรุปข้อมูลตัวละคร ==\n");
    printf("Name : %s\n", name);
    printf("Level : %d\n", Level);
    printf("HP : %d\n", MaxHp);
    printf("ATK : %d\n", Atk);
    printf("DEF : %d\n", Def);

    return 0;
}