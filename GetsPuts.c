#include <stdio.h>

int main()
{
    char charMatrix[50];

    printf("Bitte geben Sie einen Text ein:");

    // char *gets(char *m1)
    // gibt einen leeren Pointer zurück, wenn es einen Fehler gibt
    char *p = gets(charMatrix);

    if (p)
    {
        printf("Adresse des Texts ist: %p\n", p);
    }

    // int puts(char* m1)
    // puts setzt ein "\n"-Charakter automatisch am Ende des auszugebenden Texts
    int ergebnis = puts(p);
    printf("Rueckgabe der puts-Funktion ist: %d\n", ergebnis); // Erfolg = 0

    return 0;
}
