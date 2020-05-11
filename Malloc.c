#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int *intPointer = (int *)malloc(10 * sizeof(int));
    int *intPointer = (int *)calloc(10, sizeof(int));

     for (int i = 0; i < 10; i++)
    {
        intPointer[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(intPointer + i));
    }

    free(intPointer);

    printf("\n");
    printf("*****************************************************\n");
    printf("\n");

    return 0;
}
