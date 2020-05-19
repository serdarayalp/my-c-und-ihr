#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *quelle, *ziel;
    long int position;
    int leseVariable;

    quelle = fopen("quelle.txt", "rb");
    ziel = fopen("ziel.txt", "wb");

    fseek(quelle, 0L, SEEK_END);
    position = ftell(quelle);

    for(position = position - sizeof(char); position >= 0; position--) {
        fseek(quelle, position, SEEK_SET);
        fputc(fgetc(quelle), ziel); 
    }
    
    fclose(quelle);
    fclose(ziel);

    ziel = fopen("ziel.txt", "rb");

    while ((leseVariable = fgetc(ziel)) != EOF)
    {
        putchar(leseVariable);
    }

    fclose(ziel);    

    return 0;
}