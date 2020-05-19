#include <stdio.h>

int main(int argc, char const *argv[])
{
    char charVariable;

    while (!feof(stdin))
    {
        scanf("%c", &charVariable);
        printf("%c", charVariable);
    }

    return 0;
}
