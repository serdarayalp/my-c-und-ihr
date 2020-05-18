#include <stdio.h>

int main()
{
    FILE *filePointer;
    char leseVariable;

    filePointer = fopen("File2.txt", "w");

    leseVariable = fgetc(filePointer);

    if (ferror(filePointer))
    {
        printf("Datei kann nicht gelesen werden! In diese Datei darf nur geschrieben werden.\n");
    }

    printf("%c", leseVariable);

    fclose(filePointer);

    return (0);
}