#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *filePointer;
    int leseVariable;

    if (argc != 2)
    {
        printf("Format: <Name des Programms> <Name der Datei>!\n");
        exit(1);
    }

    if ((filePointer = fopen(argv[1], "r")) == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    while ((leseVariable = fgetc(filePointer)) != EOF)
    {
        putchar(leseVariable);
    }

    fclose(filePointer);

    return 0;
}
