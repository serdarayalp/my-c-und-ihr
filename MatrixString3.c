#include <stdio.h>
#include <string.h>

int main()
{
    char charMatrix[4][3][10];

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            strcpy(charMatrix[x][y], "Monitor");
        }
    }

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%s ", charMatrix[x][y]);
        }
        printf("\n");
    }

    return 0;
}
