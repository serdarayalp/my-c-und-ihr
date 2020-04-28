#include <stdio.h>

int main()
{
    int *pointerArray[5];
    int intVar1, intVar2, intVar3, intVar4, intVar5;

    pointerArray[0] = &intVar1;
    pointerArray[1] = &intVar2;
    pointerArray[2] = &intVar3;
    pointerArray[3] = &intVar4;
    pointerArray[4] = &intVar5;

    for (int i = 0; i < 5; i++)
    {
        *pointerArray[i] = i + 5;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *pointerArray[i]);
    }
    
    printf("\n");
    printf("***************************************************************");
    printf("\n");

    char *namePointer[] = {"Computer","Monitor","Diskette","Drucker"};

    for (int i = 0; *namePointer[i]; i++)
    {
        printf("%s\n", namePointer[i]);
    }
    

    return 0;
}