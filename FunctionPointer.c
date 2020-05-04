#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{

    int ergebnis;

    int (*addPointer)(int a, int b);
    addPointer = add;

    ergebnis = (*addPointer)(10, 15);
    printf("Das Ergebnis ist: %d\n", ergebnis);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    int (*functionPointerArray[3])(int a, int b);
    functionPointerArray[0] = add;
    functionPointerArray[1] = sub;
    functionPointerArray[2] = mul;

    // oder so....
    int (*functionPointerArray2[3])(int a, int b) = {add, sub, mul};

    printf("Das Ergebnis 5 * 8 ist: %d\n", (*functionPointerArray[2])(5, 8));
    printf("Das Ergebnis 5 * 9 ist: %d\n", (*functionPointerArray2[2])(5, 9));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}