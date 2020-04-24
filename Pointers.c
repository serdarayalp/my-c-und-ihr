#include <stdio.h>

int main()
{

    int intVariable;
    int *intPointer;

    intVariable = 200;

    intPointer = &intVariable;

    printf("%d\n", intVariable);
    printf("%d\n", *intPointer);
    printf("%p\n", intPointer);
    printf("%p\n", &intVariable);
    
    *intPointer = 400;
    printf("%d\n", intVariable);

    return 0;
}
