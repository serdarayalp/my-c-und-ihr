#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *filePointerQuelle;
    FILE *filePointerZiel;

    char leseVariable;

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

    while (!feof(filePointerQuelle))
    {
        leseVariable = fgetc(filePointerQuelle);
        // FERROR immer direkt nach einer FILE-Operation!
        if (ferror(filePointerQuelle))
        {
            printf("Fehler während des Lesens der Datei...!\n");
            exit(1);
        }

        if (!feof(filePointerQuelle))
        {
            fputc(leseVariable, filePointerZiel);

            // FERROR immer direkt nach einer FILE-Operation!
            if (ferror(filePointerQuelle))
            {
                printf("Fehler während des Lesens der Datei...!\n");
                exit(1);
            }
        }
    }

    fclose(filePointerQuelle);
    fclose(filePointerQuelle);

    return 0;
}
