#include <stdio.h>

int main()
{

    int d1, d2;
    printf("INT-Wert eingeben: ");
    scanf("%2d%d", &d1, &d2);
    printf("%d %d\n", d1, d2);

    /*
    int meineZahl;

    printf("Bitte geben Sie eine Zahl ein: ");

    // Hier muss man auf das &-Zeichen achten!
    scanf("%d", &meineZahl); 
    
    printf("Die eingegebene Zahl ist: %d\n", meineZahl);
    */

    printf("*****************************************************\n");

    /*
    // Für die Ausgabe von double-Werten verwende entweder '%f' oder '%lf'
    double meineDoubleVariable = 10;
    printf("%lf\n", meineDoubleVariable);

    long double meineLongDoubleVariable = 10;
    printf("%Lf\n", meineLongDoubleVariable);
    */

    printf("*****************************************************\n");

    /*
    unsigned int meineZahl;

    printf("Bitte geben Sie eine Zahl ein (HEX): ");

    // Hier muss man auf das &-Zeichen achten!
    scanf("%x", &meineZahl); 
    
    printf("Die eingegebene Zahl ist: %u\n", meineZahl);    
    */

    /*
    int d1;
    char m1[40];

    printf("Bitte geben sie einen Text ein: ");
    scanf("%s%n", m1, &d1);

    printf("Sie haben eingegeben: %s\n", m1);
    printf("Laenge des Textes: %d\n", d1);
    */

    /*
    char c1, c2;
    printf("Bitte geben Sie zwei Buchstaben ein (im Format B&B): ");
    scanf("%c%*c%c", &c1, &c2);
    printf("%c %c", c1, c2);
    */

    /*
    char charMatrix[40];
    printf("Bitte geben sie einen Text ein: ");
    scanf("%5s", charMatrix);
    printf("%s\n", charMatrix);
    */

    /*
    int d1, d2, d3, d4;
    printf("Bitte geben Sie 4 INT-Werte ein: ");
    scanf("%d%d%d%d", &d1, &d2, &d3, &d4); // dann Eingabe wie z.B. 1 2 3 4 oder nach jeder Zahl auf ENTER
    printf("Die Summe dieser Zahlen sind: %d\n", d1+d2+d3+d4);
    */

    /*
    int d1, d2, d3;
    char c1;
    printf("Bitte geben Sie 2 INT-, 1 CHAR und wieder ein INT-Wert(-e) ein: ");
    // scanf("%d%d%c%d", &d1, &d2, &c1, &d3); // 1 2 a 3 würde nicht gehen
    scanf("%d%d %c%d", &d1, &d2, &c1, &d3); // 1 2 a 3 würde gehen
    printf("Die Summe dieser Zahlen sind: %d\n", d1 + d2 + d3);
    printf("%c\n", c1);
    */

    /*
    char charMatrix1[20], charMatrix2[20];
    char c1;
    printf("Bitte geben Sie [TEXT-CHARAKTER-TEXT]: ");
    // scanf("%s%c%s", charMatrix1, &c1, charMatrix2); // "serdar x ayalp" würde nict gehen
    scanf("%s %c%s", charMatrix1, &c1, charMatrix2); // "serdar x ayalp" würde gehen
    printf("Text1 ist %s\n", charMatrix1);
    printf("Text2 ist %s\n", charMatrix2);
    printf("%c\n", c1);
    */

    return 0;
}