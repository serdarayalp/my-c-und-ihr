#include <stdio.h>
#include <ctype.h>

int main()
{

    int d1;
    char d2;
    int d3;

    printf("Wählen Sie die Aktion aus:\n");

    printf("\t [A] - CHAR zu ASCII\n");
    printf("\t [B] - ASCII zu CHAR:\n");

    d1 = toupper(getchar());

    if (d1 == 'A')
    {
        printf("Bitte geben Sie Character ein: ");
        scanf("%c", &d2);
        printf("ASCII-Wert ist: %d\n", getchar());
    }

    if (d1 == 'B')
    {
        printf("Bitte geben Sie den ASCII-Wert ein: ");
        scanf("%d", &d3);
        printf("ASCII-Wert ist: %c\n", d3);
    }
}