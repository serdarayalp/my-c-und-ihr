#include <stdio.h>

int main()
{

    char charMatrix[10];

    charMatrix[0] = 'S';
    charMatrix[1] = 'E';
    charMatrix[2] = 'R';
    charMatrix[3] = 'D';
    charMatrix[4] = 'A';
    charMatrix[5] = 'R';

    for (int index = 0; index < 6; index++)
    {
        printf("%c", charMatrix[index]);
    }
    printf("\n");

    printf("*****************************************************\n");

    int intMatrix[10];
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &intMatrix[9]);
    printf("Das letzte Element des Matrixs ist: %d\n", intMatrix[9]);

    printf("*****************************************************\n");

    return 0;
}
