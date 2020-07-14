#include <stdio.h>
#include <limits.h>

#define MILLISECONDS(age) (age * 365 * 24 * 60 * 60 * 1000)

#define MACRO_1

#define MACRO_2(p1) #p1

#define MACRO_3(p1) printf("%d\n", (p1##1) + (p1##2));

int main()
{
    /*
    int age;

    #if INT_MAX < MILLISECONDS(12)
    #error Integer size cannot hold our age in milliseconds
    #endif

    age = MILLISECONDS(12);

    printf("%d \n", age);
    */

#undef MACRO_1
#ifdef MACRO_1
    printf("MACRO_1 ist definiert...\n");
#else
    printf("MACRO_1 ist NICHT definiert...\n");
#endif

    int v = 50;
    printf("%s = %d\n", MACRO_2(v), v); // gibt aus : v = 50

    int d1 = 10;
    int d2 = 40;
    int ab1 = 80;
    int ab2 = 100;

    MACRO_3(d);
    MACRO_3(ab);

    return 0;
}