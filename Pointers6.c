#include <stdio.h>
#include <string.h>

void function1(char *text1, char *text2);

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

    char charMatrix1[50];
    char charMatrix2[50];

    printf("Bitte geben Sie Text1 ein (<50): ");
    scanf("%s", charMatrix1);

    printf("Bitte geben Sie Text1 ein (<50): ");
    scanf("%s", charMatrix2);

    function1(charMatrix1, charMatrix2);

    return 0;
}

void function1(char *text1, char *text2) {
    char resultMatrix[100];

    strcpy(resultMatrix, text1);
    strcat(resultMatrix, text2);

    printf("%s\n", resultMatrix);
}
