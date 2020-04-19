#include <stdio.h>

#define MAX_LIMIT 50 

int main()
{

    char charMatrix[MAX_LIMIT];

    printf("Bitte geben Sie einen Text ein (Anzahl der Buchstaben < %d): ", MAX_LIMIT);
    
    // Function 'gets' ist deprecated, stattdessen 'fgets' verwenden:
    fgets(charMatrix, MAX_LIMIT-1, stdin); 

    /*
    for (int index = 0; charMatrix[index]; index++)
    {
        printf("%c", charMatrix[index]);
    }
    */

    printf("%s", charMatrix);



    printf("\n");

    printf("*****************************************************\n");

    return 0;
}
