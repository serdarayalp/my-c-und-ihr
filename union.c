#include <stdio.h>
#include <string.h>

union uni_1
{
    char a;
    int b;
    double c;
} u_1;

int main()
{

    u_1.b = 17;
    u_1.a = 'A';

    printf("%d %c\n", u_1.b, u_1.a);

    u_1.b = 17;
    printf("%d %c\n", u_1.b, u_1.a);

    u_1.c = 10.2;
    printf("%d %f\n", u_1.b, u_1.c);

    return 0;
}