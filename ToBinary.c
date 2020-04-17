#include <stdio.h>
#include <string.h>

void toBinary(int dezimalZahl);

int main()
{
    int zahl1 = 75;
    int zahl2 = 112;

    printf("%d: ", zahl1);
    toBinary(zahl1);

    printf("\n");

    printf("%d: ", zahl2);
    toBinary(zahl2);

    printf("\n");

    zahl1 = zahl1 << 1;
    zahl2 = zahl2 >> 1;

    printf("%d: ", zahl1);
    toBinary(zahl1);

    printf("\n");

    printf("%d: ", zahl2);
    toBinary(zahl2);

    printf("\n");

    return 0;
}

void toBinary(int dezimalZahl) {
    for (int index = 128; index > 0; index = index/2) {
        // Bitwise AND (&)
        if (dezimalZahl & index) {
            printf("1 ");
        } else {
            printf("0 ");
        }
    }
}