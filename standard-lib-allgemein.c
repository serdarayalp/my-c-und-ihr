#include <stdio.h>
#include <stdlib.h>

int main()
{
    // abort(); // Programm beenden

    printf("%d\n", abs(-1));
    printf("%ld\n", labs(-10L)); // long abs

    printf("%f\n", atof("a10.5")); // sonst 0.000000
    printf("%d\n", atoi("10"));    // sonst 0
    printf("%ld\n", atol("10"));   // sonst 0

    // exit(0); // Program normal beenden

    printf("Das ist ein Tests...\n");

    /*
    RAND_MAX is the maximum value that may be returned by rand. The minimum is zero.
    
    #define RAND_MAX ---> 0x7FFF  (DEZIMAL = 32767)
    */
    printf("%d\n", rand()); // 0 < x < RAND_MAX (in stdlib)

    return 0;
}