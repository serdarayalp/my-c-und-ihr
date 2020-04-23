#include <stdio.h>

int main()
{
    // char charMatrix[5][21]; // 5 Strings, 21 Chars mit \0
    // char charMatrix3D[4][3][41]; // 3 Strings, 41 Chars mit \0, in 4 Gruppen

    char charMatrix[10][20];
    int index1, index2;
    char charVariable = 'A';

    for (index1 = 0; index1 < 10; index1++)
    {
        for (index2 = 0; index2 < 20; index2++)
        {
            charMatrix[index1][index2] = charVariable;
        }
    }

    for (index1 = 0; index1 < 10; index1++)
    {
        for (index2 = 0; index2 < 20; index2++)
        {
            printf("%c ", charMatrix[index1][index2]);
        }
        printf("\n");
    }

    return 0;
}
