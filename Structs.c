#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Neue Type-Definition
typedef int ganzzahl;

struct _adresse // Hier wird "struct _adresse" als ein neuer Type behandelt
{
    char strasse[200];
    int hausNummer;
};

typedef struct _adresse adresse;

/* oder man könnte den Type so definieren:

    typedef struct _adresse {
        char strasse[200];
        int hausNummer;
    } adresse;

*/

int main()
{

    ganzzahl gz = 100;
    printf("%d\n", gz);

    printf("%s\n", "********************************************************");

    // return-Type von der Funktion 'sizeof' ist 'unsigned long'
    printf("Type 'Adresse' ist %lu-Byte groß\n", sizeof(adresse));

    adresse adr;

    strncpy(adr.strasse, "Marktstrasse", 200);
    adr.strasse[199] = '\0';

    adr.hausNummer = 10;

    printf("%s\n", "********************************************************");

    adresse *addressPointer = malloc(sizeof(adresse));
    
    (*addressPointer).hausNummer = 20;
    // Diese Schreinweise ist zu lang, man sollte stattdessen folgendes verwenden:
    // addressPointer->hausnummer = 20;

    return 0;
}