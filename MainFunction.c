#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Anzahl der Parameter ist: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("%d. Parameter ist: %s\n", i, argv[i]);
    }

    return 0;
}
