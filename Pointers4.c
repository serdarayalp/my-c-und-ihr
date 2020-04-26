#include <stdio.h>

int main()
{
    int intMatrix[10];
    int *p = intMatrix;

    for (int i = 0; i < 10; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", intMatrix[i]);
    }

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    int intMatrix2[20];
    *(intMatrix2 + 0) = 100;
    *(intMatrix2 + 1) = 200;
    *(intMatrix2 + 2) = 300;

    for (int i = 0; i < 20; i++)
    {
        printf("%d\t", intMatrix2[i]);
    }

    return 0;
}
