#include <stdio.h>

int main()
{
    char charMatrix[50];

    printf("Bitte geben Sie einen Text ein:");
    gets(charMatrix);

    puts(charMatrix);
    printf("%s\n", charMatrix);
    printf(charMatrix);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    return 0;
}
