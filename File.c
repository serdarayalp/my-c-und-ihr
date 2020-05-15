#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *filePointer;

    char mx[100];
    char *mxPointer;

    int leseVariable; // Hier kann man den Typ auch als CHAR definieren

    printf("Bitte geben Sie einen Text ein: ");
    gets(mx);

    if ((filePointer = fopen("File.txt", "w")) == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    mxPointer = mx;
    while (*mxPointer)
    {
        // fputc return the character written as an "unsigned char cast to an int or EOF on error.
        if (fputc(*mxPointer, filePointer) == EOF)
        {
            printf("Fehler während des Schreibens in die Datei...!\n");
            exit(1);
        }
        mxPointer++;
    }

    fclose(filePointer);

    if ((filePointer = fopen("File.txt", "r")) == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    while ((leseVariable = fgetc(filePointer)) != EOF)
    {
        putchar(leseVariable);
    }
    
    /*
    for (;;)
    {
        leseVariable = fgetc(filePointer);
        if (leseVariable == EOF)
        {
            break;
        }

        // putchar(c) is equivalent to putc(c, stdout).
        // putc(leseVariable, stdout);
        putchar(leseVariable);
    }
    */

    return 0;
}
