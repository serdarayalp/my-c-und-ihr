#include <stdio.h>
#include <math.h>

int main()
{

    /*
    Die mathematische Bibliothek muss beim Erstellen der ausführbaren Datei 
    eingebunden werden. Wie dies zu tun ist, hängt von der Umgebung ab, 
    aber unter Linux/Unix fügen Sie einfach "-lm" zum Befehl hinzu:

        gcc -std=c99 -Wall -o Sqrt Sqrt.c -lm
    */

    int auswahl;
    double zahl;

    printf("Bitte geben Sie eine Double-Zahl ein: ");
    scanf("%lf", &zahl);

    printf("[1] eingeben, wenn das Quadrat der Zahl zu finden ist: \n");
    printf("[2] eingeben, wenn der Wurzel der Zahl zu finden ist: \n");

    scanf("%d", &auswahl);

    if (auswahl == 1)
    {
        printf("Resultat ist: %lf\n", zahl * zahl);
    }

    if (auswahl == 2)
    {
        printf("Resultat ist: %lf\n", sqrt(zahl));
    }

    return 0;
}