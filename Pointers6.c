#include <stdio.h>

int main()
{
    // definiert man einen Text über ein Matrix, 
    // dann wird für diesen Text Speicherplatz reserviert!
    char charMatrix[50] = "Das ist ein Test";
    printf("%s\n", charMatrix);

    // definiert man einen Text über einen Pointer, 
    // dann wird für diesen Text kein Speicherplatz reserviert!
    char *charPointer = "Das ist auch ein Test...";
    printf("%s\n", charPointer);


    return 0;
}
