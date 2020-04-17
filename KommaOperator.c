#include <stdio.h>

int main()
{
    int index1, index2;

    for (index1 = 0, index2 = 0; index1 + index2 < 100; index1 += 2, index1 += 5)
    {
        printf("%d\n", index1 + index2);
    }

    printf("*****************************************************\n");

    index1 = 10;
    index2 = (index1, 15, 20);
    printf("%d", index2);

    return 0;
}
