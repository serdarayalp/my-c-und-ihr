#include <stdio.h>

int main()
{
    char charMatrix[50];
    char *charPointer;

    printf("Bitte geben Sie einen Text ein (<50): ");
    scanf("%s", charMatrix);
    //gets(charMatrix);

    for (int i = 0; charMatrix[i]; i++)
    {
        charMatrix[i] = charMatrix[i] + 3;
    }

    printf("%s\n", charMatrix);

    for (int i = 0; charMatrix[i]; i++)
    {
        charMatrix[i] = charMatrix[i] - 3;
    }

    printf("%s\n", charMatrix);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    charPointer = charMatrix;

    for (; *charPointer; charPointer++)
    {
        *charPointer = *charPointer + 3;
    }

    printf("%s\n", charMatrix);

    charPointer = charMatrix;

    for (; *charPointer; charPointer++)
    {
        *charPointer = *charPointer - 3;
    }

    printf("%s\n", charMatrix);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    charPointer = charMatrix;

    while (*charPointer)
    {
        *charPointer = *charPointer + 3;
        charPointer++;
    }

    printf("%s\n", charMatrix);

    charPointer = charMatrix;

    while (*charPointer)
    {
        *charPointer = *charPointer - 3;
        charPointer++;
    }

    printf("%s\n", charMatrix);

    return 0;
}
