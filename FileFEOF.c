#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    int leseVariable;

    filePointer = fopen("File.txt", "r");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    while (1)
    {
        leseVariable = fgetc(filePointer);
        if (feof(filePointer))
        {
            break;
        }
        printf("%c", leseVariable);
    }

    fclose(filePointer);

    return 0;
}