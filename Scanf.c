#include <stdio.h>

int main() {

    int meineZahl;

    printf("Bitte geben Sie eine Zahl ein: ");

    // Hier muss man auf das &-Zeichen achten!
    scanf("%d", &meineZahl); 
    
    printf("Die eingegebene Zahl ist: %d\n", meineZahl);

    printf("*****************************************************\n");

    // Für die Ausgabe von double-Werten verwende entweder '%f' oder '%lf'
    double meineVariable = 10;
    printf("%lf\n", meineVariable);
}