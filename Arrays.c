#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int meinArray[2];
    meinArray[0] = 100;
    meinArray[1] = 200;

    // Name eines Array ist die Adresse seines ersten Elements, als ob er ein Pointer wäre.
    // Hier ist es aber zu beachten, dass Pointer-Arithmetik hier auf dem Namen des Array's 
    // nicht funktioniert, z.B. Addition mit dem Namen des Array's würde nicht gehen (meinArray++) 
    printf("%p\n",meinArray);
    
    // Wenn der Name des Arrays eine Adresse beinhaltet, dann kann man ihn zu einem Pointer zuweisen
    int *meinPointer = meinArray;
    printf("%p\n",meinPointer);

    printf("%s\n", "********************************************************");

    char meinCharArray[5];
    meinCharArray[0] = 'h';
    meinCharArray[1] = 'i';
    meinCharArray[2] = '\0'; // Strings sind immer mit einem NULL-Byte zu beenden!

    // Weil die Strings immer mit einem NULL-Byte beendet werden, können Strings bzw. char-Arrays 
    // einfach mit ihrem Namen (Start-Adresse) als Parameter zu einer Funktion übergeben werden. 
    // Bei den normalen Arrays muss man aber meistens die Länge des Arrays auch als Parameter mit übergeben. 

    printf("%s\n", meinCharArray);

    char meinCharArray2[5];
    meinCharArray2[0] = 'h';
    meinCharArray2[1] = 'a';
    meinCharArray2[2] = 'l';
    meinCharArray2[3] = 'l';
    meinCharArray2[4] = 'o'; // Unser Array ist gefüllt und NULL-Byte hier vergessen
    // Ohne NULL-Byte können es zum Fehler führen!

    printf("%s\n", meinCharArray2);

    printf("%s\n", "***************** String Literals ***********************");

    // Eine einfachere Methode Strings zu definieren ist die Methode mit String Literals
    char *meinString = "Hallo Welt!";
    // Mit dieser Definition wird zum Ende des Strings ein NULL-Byte automatisch gesetzt (\0)

    printf("%s\n", meinString);
    printf("%p\n", meinString);

    // Hier kann man die Characters des Strings mit Hilfe des Pointers erreichen, wie ein Array. 
    printf("%c\n", meinString[0]);

    printf("%s\n", "********************************************************");

    // Eine andere Methode ein String zu definieren ist: Kopieren aus einem String in ein Array
    char *meinString2 = "Hallo Welt!";

    char meinTargetArray[5];
    strncpy(meinTargetArray, meinString2, 5);
    meinTargetArray[4] = '\0'; // Nach dem Kopieren muss NULL-Byte sicherheitshalber immer auf das letzte Element gesetzt werden

    printf("%s\n", meinTargetArray);

    printf("%s\n", "********************** MALLOC **************************");
    // void *malloc(size_t size);

    // Ein Array mit zwei Elements dynamisch erstellen per malloc
    // malloc erwartet als Parameter die Anzahl der Bytes, aber in jedem System könnte die Typen andere Größen haben
    // aus dem Grund sollte man hier auf jeden Fall die Methode sizeof(TYPE) verwenden
    int *meinDynamikArray = malloc(2 * sizeof(int));
    printf("Adresse des Speicherplatzs ist: %p\n", meinDynamikArray);

    meinDynamikArray[0] = 100;
    meinDynamikArray[1] = 200;

    printf("%d\n", meinDynamikArray[0]);
    printf("%d\n", meinDynamikArray[1]);

    free(meinDynamikArray); // Speicher wieder freigeben
    // Nach der Freigabe existiert der Pointer weiterhin aber der Wert drin ist weg
    printf("Adresse des Speicherplatzs ist: %p\n", meinDynamikArray);

    return 0;
}