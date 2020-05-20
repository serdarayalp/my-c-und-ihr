#include <stdio.h>
#include <string.h>

struct mein_struct
{
    int d1;
    int d2;
    char d3;
    int m1[10];
    double d4;
};

int main(int argc, char const *argv[])
{

    struct mein_struct ms;

    printf("%d\n", sizeof(struct mein_struct));
    printf("%d\n", sizeof(ms));
    printf("%d\n", sizeof ms);

    return 0;
}