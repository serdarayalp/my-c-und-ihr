/* Um den Code zu kompilieren, verwende:

    gcc -std=c99 -Wall -o HelloWorld HelloWorld.c 

    -std = einen C-Standard auswählen, hier c99
    -Wall = Warning All > alle Warnungen anzeigen
    -o = Name der Ausgabe-Datei (.exe) hier eingeben
*/

#include <stdio.h> // stdio > Standard Input und Output

// wenn man seine eigene HeaderDatei verwenden möchte, dann folgendermaßen
// #include "meineHeaderDatei.h"
// damit wird die Datei direkt im Projekt-Ordner und nicht im System-Ordner gesucht

int main(void) // Start-Funktion in C
{
    printf("Hallo Welt!\n"); // printf > print formatted

    return 0; // EXIT-Code, 0 = Erfolgreich, alles andere bedeutet FEHLER
}