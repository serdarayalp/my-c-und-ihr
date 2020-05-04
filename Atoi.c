#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{

    int intVariable;
    long int longIntVariable;

    if (argc != 3) {
        printf("Starten des Programms mit Hilfe: <Name des Programms> <Parameter1> <Parameter2>");
        exit(1); // 0 = Programm ist ganz normal beendet. Sonst irgendwas <> 0
    }

    intVariable = atoi(argv[1]); // atoi = ASCII to Integer
    longIntVariable = atol(argv[2]);

    printf("%d %ld\n", intVariable, longIntVariable);

    return 0;
}
