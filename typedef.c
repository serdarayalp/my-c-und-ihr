#include <stdio.h>

typedef int ganzzahl;

typedef struct
{
    int a;
    int b;
} mein_struct;

int main()
{
    ganzzahl a = 10;
    printf("%d\n", a);

    mein_struct m1;

    m1.a = 10;
    m1.b = 20;

    printf("%d %d\n", m1.a, m1.b);

    return 0;
}