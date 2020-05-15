#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *filePointerQuelle;
    FILE *filePointerZiel;

    int leseVariable;

    if (argc != 3)
    {
        printf("Format: <Name des Programms> <Quell-Datei> <Ziel-Datei>!\n");
        exit(1);
    }

    if ((filePointerQuelle = fopen(argv[1], "rb")) == NULL)
    {
        printf("Quell-Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    if ((filePointerZiel = fopen(argv[2], "wb")) == NULL)
    {
        printf("Ziel-Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    while ((leseVariable = fgetc(filePointerQuelle)) != EOF)
    {
        putc(leseVariable, filePointerZiel);
    }

    fclose(filePointerQuelle);
    fclose(filePointerQuelle);

    return 0;
}
