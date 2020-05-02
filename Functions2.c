#include <stdio.h>
#include <ctype.h>

int printText(int a);

int main(void)
{
    printText(2);

    return 0;
}


int printText(int a)
{
    printf("%d\n",a);
    return a;
}