#include <stdio.h>

extern int globalVar;

void externFunction(void)
{
    printf("Der Wert in der Datei 'Extern2.c' ist %d\n", globalVar);
    globalVar++;
}