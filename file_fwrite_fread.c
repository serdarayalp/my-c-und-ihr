#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

        Die Funktion fread() liest nmemb-Datenelemente, die jeweils size-Bytes lang sind, 
        aus dem Strom und speichert sie an der durch ptr angegebenen Stelle.

        size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
        
        Die Funktion fwrite() schreibt nmemb-Datenelemente, die jeweils size-Bytes lang sind, in den 
        Datenstrom.

        size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
    */

    FILE *filePointer;
    int intVariable;

    filePointer = fopen("File.txt", "w");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    intVariable = 200;

    size_t ergebnis = fwrite(&intVariable, sizeof(int), 1, filePointer);
    if (ergebnis != 1)
    {
        printf("Fehler waehrend des Schreibens in die Datei!\n");
        exit(1);
    }

    fclose(filePointer);

    filePointer = fopen("File.txt", "r");
    if (filePointer == NULL)
    {
        printf("Datei kann nicht geoeffnet werden!\n");
        exit(1);
    }

    size_t ergebnis2 = fread(&intVariable, sizeof intVariable, 1, filePointer);
    if (ergebnis2 != 1)
    {
        printf("Fehler waehrend des Lesens aus der Datei!\n");
        exit(1);
    }

    printf("Der Wert aus der Datei ist: %d\n", intVariable);

    fclose(filePointer);

    return 0;
}