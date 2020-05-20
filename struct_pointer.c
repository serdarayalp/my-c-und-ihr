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

    struct person max;
    struct person *maxPointer;

    maxPointer = &max;

    strcpy(max.vorname, "Max");
    strcpy(maxPointer->nachname, "Mustermann");

    maxPointer->alter = 40;

    printf("%s\n", max.vorname);
    printf("%s\n", maxPointer->nachname);
    printf("%d\n", maxPointer->alter);

    return 0;
}