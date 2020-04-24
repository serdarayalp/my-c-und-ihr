#include <stdio.h>

int main()
{

    char _charMatrix[][20] = {"Computer", "Buch", "Stift"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", _charMatrix[i]);
    }

    printf("\n");

    char monsterMatrix[][3][20] = {
        {"Rat", "Bat", "Spider"},
        {"Goblin", "Orc", "Dwarf"},
        {"Dragon", "Lich", "Banshee"},
        {"Demon", "Hydra", "Giant Spider"}};


    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%s\t", monsterMatrix[x][y]);
        }
        printf("\n");
    }

    printf("\n");

    // int intMatrix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    char charMatrix[] = "Das ist ein Test";

    int index;
    for (index = 0; charMatrix[index]; index++)
    {
        printf("%d - %c\n", index, charMatrix[index]);
    }

    printf("Am Ende der Schleife: index ist %d\n", index);

    int index2;
    for (index2 = 0; index2 <= index; index2++)
    {
        printf("ASCII-Code: %c ist: %d\n", charMatrix[index2], charMatrix[index2]);
    }

    printf("Am Ende der Schleife: index2 ist %d\n", index2);

    return 0;
}
