#include <stdio.h>
#include <string.h>

struct person
{
    int alter;
};

struct person meineFunktion();

int main(int argc, char const *argv[])
{
    struct person _person = meineFunktion();

    printf("%d\n", _person.alter);

    return 0;
}

struct person meineFunktion()
{
    struct person _person;
    _person.alter = 40;

    return _person;
}