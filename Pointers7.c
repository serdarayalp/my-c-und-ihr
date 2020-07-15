#include <stdio.h>

int main()
{

    int meineVariable = 100;
    printf("Wert der Variable 'meineVariable' ist: %d\n", meineVariable);

    printf("%s\n", "********************************************************");

    int *meinPointer = &meineVariable; // Adresse der Variable im Pointer speichern
    printf("Adresse der Variable 'meineVariable' ist: %p\n", meinPointer);

    printf("%s\n", "********************************************************");

    printf("Wert der Variable 'meineVariable' per Pointer ist: %d\n", *meinPointer);

    printf("%s\n", "***************** Pointer-Arithmetik ***************************");

    printf("Adresse der Variable 'meineVariable' ist: %p\n", meinPointer);
    // z.B. die Adresse ist 140735632454860

    meinPointer++;

    printf("Adresse der Variable 'meineVariable' ist: %p\n", meinPointer);
    // z.B. die Adresse ist 140735632454864
    // die Adresse ist 4 höher als die erste Adresse, weil int ja 4 Bytes ist

    printf("%s\n", "********************************************************");

    int meineVariable2 = 200;
    // hat man einen sogenannten VOID POINTER, dann sieht es etwas ander aus, wenn
    // die Adresse um eins erhöht wird...
    // 0x7ffe430f3ba4
    // 0x7ffe430f3ba5 (Hier wurde die Adresse nur um eins erhöht, obwohl der Wert darin ein INT ist)
    void *meinPointer2 = &meineVariable2;
    printf("Adresse der Variable 'meineVariable2' ist: %p\n", meinPointer2);
    meinPointer2++;
    printf("Adresse der Variable 'meineVariable2' ist: %p\n", meinPointer2);

    return 0;
}