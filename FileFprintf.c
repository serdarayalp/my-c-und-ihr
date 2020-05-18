#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    int intVar1, intVar2, intVar3;

    filePointer = fopen("File.txt", "w");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    fprintf(filePointer, "%d %d %d\n", 1, 2, 3);

    fclose(filePointer);

    filePointer = fopen("File.txt", "r");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    fscanf(filePointer, "%d %d %d", &intVar1, &intVar2, &intVar3);

    fclose(filePointer);

    printf("%d %d %d\n", intVar1, intVar2, intVar3);

    return 0;
}