#include <stdio.h>
#include <string.h>

struct person
{
    char vorname[50];
    char nachname[50];
    int alter;
};

int main(int argc, char const *argv[])
{

    struct person person1;
    struct person person2;

    strcpy(person1.vorname, "Serdar");
    strcpy(person1.nachname, "Ayalp");
    person1.alter = 40;

    person2 = person1;

    printf("\n");

    printf("%s\n", person1.vorname);
    printf("%s\n", person1.nachname);
    printf("%d\n", person1.alter);

    printf("\n");

    printf("%s\n", person2.vorname);
    printf("%s\n", person2.nachname);
    printf("%d\n", person2.alter);

    return 0;
}