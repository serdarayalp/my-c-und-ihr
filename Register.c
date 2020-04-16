#include <stdio.h>
#include <time.h>

int main()
{
    int index;
    register int index_register;
    int index_i;
    clock_t c1, c2;

    /* register variablen haben keine Adress im Speicher, 
    weil sie ja direkt im Register des CPUs gespeichert werden:
    
    int *registerPointer = &index_register;
    */

    c1 = clock();

    for (index_i = 0; index_i < 10; index_i++)
    {
        for (index = 0; index < 30000; index++)
        {
            ;
        }
    }

    c2 = clock();

    printf("Dauer der ersten Schleife : %ld\n", c2 - c1);

    c1 = clock();

    for (index_i = 0; index_i < 10; index_i++)
    {
        for (index_register = 0; index_register < 30000; index_register++)
        {
            ;
        }
    }

    c2 = clock();

    printf("Dauer der zweiten Schleife : %ld\n", c2 - c1);
}
