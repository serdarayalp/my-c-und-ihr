#include <stdio.h>

int main()
{

    int intVariable, intVariable2;
    int *intPointer;

    intVariable = 200;
    intVariable2 = 400;

    printf("%d\n", intVariable2);

    intPointer = &intVariable;

    printf("Adresse des Pointers ist: %p\n", &intPointer);
    printf("Pointer beinhaltet die Adresse (Variable) ist: %p\n", intPointer);
    printf("Wert der Variable ueber den Pointer ist: %d\n", *intPointer);

    printf("***************************************************************");
    printf("\n");

    intPointer++;

    printf("Adresse des Pointers ist: %p\n", &intPointer);
    printf("Pointer beinhaltet die Adresse (Variable) ist: %p\n", intPointer);
    printf("Wert der Variable ueber den Pointer ist: %d\n", *intPointer);

    printf("***************************************************************");
    printf("\n");

    (*intPointer)++; 
    // Hier wird der Wert der Variable geändert, den der Pointer zeigt
    // *intPointer++   : Hier wird aber die Adresse im Pointer geändert
    //      *intPointer++ = intPointer++
    printf("Adresse des Pointers ist: %p\n", &intPointer);
    printf("Pointer beinhaltet die Adresse (Variable) ist: %p\n", intPointer);
    printf("Wert der Variable ueber den Pointer ist: %d\n", *intPointer);

    printf("***************************************************************");
    printf("\n");

    *intPointer = *intPointer + 1;

    printf("Adresse des Pointers ist: %p\n", &intPointer);
    printf("Pointer beinhaltet die Adresse (Variable) ist: %p\n", intPointer);
    printf("Wert der Variable ueber den Pointer ist: %d\n", *intPointer);


    return 0;
}
