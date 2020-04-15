#include <stdio.h>

int main()
{

    char auswahl;
    printf("Eine Wahl treffen [A], [B] oder [C]: ");
    scanf("%c", &auswahl);

    switch (auswahl)
    {
    case 'A':
        printf("Sie haben A ausgewaehlt\n");
        // break;
    case 'B':
        printf("Sie haben B ausgewaehlt\n");
        // break;
    case 'C':
        printf("Sie haben C ausgewaehlt\n");
        // break;
    default:
        printf("Sie haben eine ungueltige Wahl getroffen!\n");
    }

    return 0;
}