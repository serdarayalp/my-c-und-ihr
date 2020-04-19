#include <stdio.h>

int main()
{
    int intMatrix[4][5];

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            intMatrix[x][y] = x + 1;
        }
    }

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("%d ", intMatrix[x][y]);
        }
        printf("\n");
    }

    return 0;
}
