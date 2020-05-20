#include <stdio.h>
#include <string.h>

struct person
{
    char vorname[50];
    char nachname[50];
    int alter;
};

void meineFunktion(struct person _person);
void meineFunktion2(struct person *personPointer);

int main(int argc, char const *argv[])
{

    struct person _person;
    struct person *personPointer;

    strcpy(_person.vorname, "Serdar");
    strcpy(_person.nachname, "Ayalp");
    _person.alter = 40;

    printf("\n");

    printf("Vor Funktionsaufruf <meineFunktion>: %s\n", _person.vorname);
    meineFunktion(_person);
    printf("Nach Funktionsaufruf <meineFunktion>: %s\n", _person.vorname);

    printf("\n");

    printf("Vor Funktionsaufruf <meineFunktion2>: %s\n", _person.vorname);
    
    personPointer = &_person;
    meineFunktion2(personPointer);
    printf("Nach Funktionsaufruf <meineFunktion2>: %s\n", _person.vorname);

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
}

void meineFunktion2(struct person *personPointer)
{
    strcpy(personPointer->vorname, "Baran Tahir");
}