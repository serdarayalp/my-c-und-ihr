#include <stdio.h>

int main()
{
    char charMatrix1[50], charMatrix2[50];

    printf("Bitte geben Sie Ihren Vor- und Nachname ein:");
    gets(charMatrix1); // Serdar Ayalp -> Serdar Ayalp

    // Nach LEERZEICHEN, TAB und RETURN werden die folgenden Charakter nicht von SCANF übernohmen 
    printf("Bitte geben Sie Ihren Vor- und Nachname wieder ein:");
    scanf("%s", charMatrix2); // Serdar Ayalp -> Serdar

    printf("%s\n%s", charMatrix1, charMatrix2);

    return 0;
}
