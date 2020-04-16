#include <stdio.h>

int globalVar = 10;

void externFunction(void);

int main()
{
    externFunction();

    printf("Der Wert in der Datei 'Extern1.c' ist %d\n", globalVar);

    return 0;
}