#include <stdio.h>
#include <string.h>

#define NAME "Max Mustermann"

// 10 hier ist immer als String behandelt...
#define INT_WERT 10

#define MEINE_PRAE_FUNCTION(d1, d2) d1 + d2
#define MEIN_COMPARE_MACRO(d1, d2) (d1 < d2) && (d1 > 10) ? 1 : 0

int main()
{
    printf("%s \n", NAME);

    // Hier wird 10 als String behandelt. Compiler muss aber den Wert noch konvertieren...
    printf("%d \n", 10 + INT_WERT);

    printf("%d \n", MEINE_PRAE_FUNCTION(10, 20));

    printf("%d \n", MEIN_COMPARE_MACRO(8, 16));

    return 0;
}