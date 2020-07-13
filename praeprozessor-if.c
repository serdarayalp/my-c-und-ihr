#include <stdio.h>
#include <string.h>

/*
    #if
    #elif
    #else
    #endif
    #ifdef
    #ifndef
*/

#define MACRO_1 10
#define MACRO_2 20

#define MACRO_3 30

#define MACRO_4 40

#define CHECK_POINT

int main()
{

#if MACRO_1 < MACRO_2
    printf("Block01\n");
#endif

#if MACRO_1 == MACRO_2
    printf("Block02\n");
#endif

#if MACRO_3 == 30
    printf("Block03\n");
#else
    printf("Block04\n");
#endif

#if MACRO_4 == 40
    printf("Block05\n");
#elif MACRO_4 == 50
    printf("Block06\n");
#elif MACRO_5 == 60
    printf("Block07\n");
#endif

#ifdef CHECK_POINT
    printf("Macro 'CHECK_POINT' ist definiert...\n");
#else
    printf("Macro 'CHECK_POINT' ist NICHT definiert...\n");
#endif

#ifndef CHECK_POINT_2
    printf("Macro 'CHECK_POINT_2' ist NICHT definiert...\n");
#else
    printf("Macro 'CHECK_POINT_2' ist definiert...\n");
#endif

    return 0;
}