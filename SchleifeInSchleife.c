#include <stdio.h>

int main()
{

    // Eine unendliche Schleife  
    /*
    for (;;)
    {
        printf("Das ist ein Test...\n");
    }
    */

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("%d ", y);
        }
        printf("\n");
    }

    printf("*****************************************************\n");

    for (int x = 0; x < 5; x++)
    {
        for (int y = 65; y <= 'Z'; y++)
        {
            printf("%c ", y);
        }
        printf("\n");
    }

    printf("*****************************************************\n");

    for (int x = 0; x < 5; x++)
    {
        for (int y = 65; y <= 'H'; y++)
        {
            for (int z = 0; z < 2; z++)
            {
                printf("%c ", y);
            }
        }
        printf("\n");
    }

    return 0;
}