#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LIMIT 50

int main()
{

    char charMatrix1[MAX_LIMIT];

    strcpy(charMatrix1, "Serdar Ayalp");

    printf("%s", charMatrix1);

    printf("\n");

    printf("*****************************************************\n");

    char charMatrix2[MAX_LIMIT];
    char charMatrix3[MAX_LIMIT];

    strcpy(charMatrix2, "SerdarAyalp");
    strcpy(charMatrix3, "Semra");

    strcpy(charMatrix2, charMatrix3);

    printf("%s\n", charMatrix2);
    printf("%s\n", charMatrix3);

    printf("*****************************************************\n");

    char charMatrix4[MAX_LIMIT];
    strcpy(charMatrix4, "Serdar");
    strcat(charMatrix4, " Ayalp");

    printf("%s\n", charMatrix4);

    printf("*****************************************************\n");

    int r1 = strcmp("b", "c");
    int r2 = strcmp("a", "a");
    int r3 = strcmp("c", "b");

    printf("%d %d %d\n", r1, r2, r3);

    printf("*****************************************************\n");

    printf("Länge des Textes ist %ld\n", strlen("Serdar Ayalp"));

    printf("*****************************************************\n");

    int convertedString = atoi("234");
    printf("Konvertiert durch die 'atoi'-Funktion: %d\n", convertedString);

    printf("*****************************************************\n");

    char charMatrix5[MAX_LIMIT];
    printf("Geben Sie einen INT-Wert ein: ");
    fgets(charMatrix5, MAX_LIMIT-1, stdin);
    printf("Konvertiert durch die 'atoi'-Funktion: %d\n", atoi(charMatrix5));


    return 0;
}
