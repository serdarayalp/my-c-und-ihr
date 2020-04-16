#include <stdio.h>

// Globale Variablen müssen nicht unbedingt initialisiert werden.
// Wenn sie nicht initialisiert sind, bekommen sie 0 als Defaultwert.
int globalVariable;

int main()
{
    // Loclate Variablen müssen aber unbedingt initialisiert werden.
    // Sonst wird eine Warnung ausgeworfen.
    int localVariable;
    printf("%d %d", globalVariable, localVariable);

    return 0;
}
