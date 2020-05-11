#include <stdio.h>

int main()
{

    /*
    int meineZahl;

    printf("Bitte geben Sie eine Zahl ein: ");

    // Hier muss man auf das &-Zeichen achten!
    scanf("%d", &meineZahl); 
    
    printf("Die eingegebene Zahl ist: %d\n", meineZahl);
    */

    printf("*****************************************************\n");

    // Für die Ausgabe von double-Werten verwende entweder '%f' oder '%lf'
    double meineDoubleVariable = 10;
    printf("%lf\n", meineDoubleVariable);

    long double meineLongDoubleVariable = 10;
    printf("%Lf\n", meineLongDoubleVariable);

    printf("*****************************************************\n");

    /*
    unsigned int meineZahl;

    printf("Bitte geben Sie eine Zahl ein (HEX): ");

    // Hier muss man auf das &-Zeichen achten!
    scanf("%x", &meineZahl); 
    
    printf("Die eingegebene Zahl ist: %u\n", meineZahl);    
    */

    int d1;
    char m1[40];

    printf("Bitte geben sie einen Text ein: ");
    scanf("%s%n", m1, &d1);

    printf("Sie haben eingegeben: %s\n", m1);
    printf("Laenge des Textes: %d", d1);
}