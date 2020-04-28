#include <stdio.h>

int main()
{
    int **intPointerPointer, *intPointer, intVariable;

    intVariable = 100;
    intPointer = &intVariable;
    intPointerPointer = &intPointer;

    printf("%p %p %p", &intVariable, intPointer, intPointerPointer);
    printf("\n");
    printf("%d %d %d", intVariable, *intPointer, **intPointerPointer);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    return 0;
}
