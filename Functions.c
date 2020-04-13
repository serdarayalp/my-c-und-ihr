#include <stdio.h>
#include <ctype.h>

void func1()
{
    printf("Das ist meine erste Zeile\n");
    return; // So was würde in Java einen Fehler auswerfen!
    printf("Das ist meine zweite Zeile\n");
}

int func2()
{
    int eingabe;
    printf("(3x + 22) : Bitte geben Sie hier den Wert für x ein: ");
    scanf("%d", &eingabe);
    return 3 * eingabe + 22;
}

int main()
{
    // toupper oder tolower
    printf("%c\n", toupper('f'));

    printf("*****************************************************\n");

    func1();

    printf("(3x + 22) : Das Ergebniss ist: %d\n", func2());
}