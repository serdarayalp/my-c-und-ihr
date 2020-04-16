#include <stdio.h>

int globalVariable = 10;

int main()
{
    short int d1;
    unsigned short int d2;

    d2 = 42758;
    d1 = d2;
    
    printf("%hd %hu\n", d1, d2);
}
