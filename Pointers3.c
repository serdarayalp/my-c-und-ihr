#include <stdio.h>

int main()
{
    int intMatrix[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = intMatrix; // oder &intMatrix[0]

    int intMatrix2[5][4];
    int *p2 = &intMatrix2[0][0];
    intMatrix2[4][3] = 27;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", intMatrix[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    printf("%d\n", *(p2 + (4 * 4) + 3));

    return 0;
}
