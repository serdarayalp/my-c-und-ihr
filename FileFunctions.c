#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *filePointer;
    char fileMatrix[100];

    filePointer = fopen("File.txt", "w");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    do
    {
        printf("Geben Sie einen Text ein:");

        gets(fileMatrix);
        strcat(fileMatrix, "\n");

        if (*fileMatrix != '\n')
        {
            fputs(fileMatrix, filePointer);
        }
    } while (*fileMatrix != '\n');

    fclose(filePointer);

    filePointer = fopen("File.txt", "r");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }    

    do
    {
        fgets(fileMatrix, 100, filePointer);
        printf(fileMatrix);
    } while (!feof(filePointer));    

    return (0);
}