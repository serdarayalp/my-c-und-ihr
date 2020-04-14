#include <stdio.h>

int main()
{
    for (int index = 0; index < 256; index++) {
        printf("%d\t\t%c\n", index, index);
    }
}