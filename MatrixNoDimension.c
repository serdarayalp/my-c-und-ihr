#include <stdio.h>

int main()
{
    // int intMatrix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    char charMatrix[] = "Das ist ein Test";

    int index;
    for (index = 0; charMatrix[index]; index++)
    {
        printf("%d - %c\n", index, charMatrix[index]);
    }

    printf("Am Ende der Schleife: index ist %d\n", index);

    int index2;
    for (index2 = 0; index2 <= index; index2++)
    {
        printf("ASCII-Code: %c ist: %d\n", charMatrix[index2], charMatrix[index2]);
    }

    printf("Am Ende der Schleife: index2 ist %d\n", index2);

    return 0;
}
