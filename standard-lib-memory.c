#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *intPointer = (int *)calloc(10, sizeof(int));
    if (!intPointer)
    {
        printf("Speicherplatz konnte nicht reserviert werden...");
    }

    int *intPointer2 = (int *)malloc(50 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        intPointer2[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", intPointer2[i]);
    }

    intPointer2 = realloc(intPointer2, 10);

    for (int i = 0; i < 10; i++)
    {
        intPointer2[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", intPointer2[i]);
    }

    free(intPointer);
    free(intPointer2);

    return 0;
}