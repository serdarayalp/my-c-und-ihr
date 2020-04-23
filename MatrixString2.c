#include <stdio.h>
#include <string.h>

int main()
{
    char charMatrix[4][21];

    strcpy(charMatrix[0], "Computer");
    strcpy(charMatrix[1], "Drucker");
    strcpy(charMatrix[2], "Maus");
    strcpy(charMatrix[3], "Monitor");

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", charMatrix[i]);
    }

    return 0;
}
