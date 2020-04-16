#include <stdio.h>

int globalVariable = 10;

int main()
{
    int localVariable;
    printf("%d %d", globalVariable, localVariable);

    return 0;
}
