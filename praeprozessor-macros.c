#include <stdio.h>

int main()
{

    /* Standard Macros nach ANSI C
       __LINE__
       __FILE__
       __DATE__
       __TIME__
       __STDC__ : 1, wenn der Compiler die ANSI Standards unterstützt... 
    */

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);

    return 0;
}