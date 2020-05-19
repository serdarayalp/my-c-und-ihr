#include <stdio.h>
#include <string.h>

struct person
{
    char vorname[50];
    char nachname[50];
    int alter;
};

void meineFunktion(struct person _person);

int main(int argc, char const *argv[])
{

    struct person _person;

    strcpy(_person.vorname, "Serdar");
    strcpy(_person.nachname, "Ayalp");
    _person.alter = 40;

    printf("\n");

    printf("Vor Funktionsaufruf: %s\n", _person.vorname);
    meineFunktion(_person);
    printf("Nach Funktionsaufruf: %s\n", _person.vorname);

    printf("\n");


    struct person _person2 = {"Semra", "Ayalp", 30};

    printf("%s\n", _person.vorname);
    printf("%s\n", _person.nachname);
    printf("%d\n", _person.alter);

    printf("\n");

    printf("%s\n", _person2.vorname);
    printf("%s\n", _person2.nachname);
    printf("%d\n", _person2.alter);

    return 0;
}

void meineFunktion(struct person _person)
{
    strcpy(_person.vorname, "Baran");
    printf("In der Funktion: %s\n", _person.vorname);
}