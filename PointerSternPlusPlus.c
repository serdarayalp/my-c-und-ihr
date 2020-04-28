#include <stdio.h>

int main()
{
    int intVariable = 250;
    int result = 0;
    int *intPointer = &intVariable;

    // the prefix ++ operator has the same precedence as * and they associate right to left. 

    printf("Wert: %d, Adresse: %p, Result:%d, Variable: %d\n", *intPointer, intPointer, result, intVariable);
    // Wert: 250, Adresse: 0028ff34, Result:0, Variable: 250

    // result = ++*intPointer; // Wert: 251, Adresse: 0028ff34, Result:251, Variable: 251
    // result = ++(*intPointer); // Wert: 251, Adresse: 0028ff34, Result:251, Variable: 251

    // result = *++intPointer; // Wert: 2686776, Adresse: 0028ff38, Result:2686776, Variable: 250
    // result = *(++intPointer); // Wert: 2686776, Adresse: 0028ff38, Result:2686776, Variable: 250

    // result = *intPointer++; // Wert: 2686776, Adresse: 0028ff38, Result:250, Variable: 250
    // result = *(intPointer++); // Wert: 2686776, Adresse: 0028ff38, Result:250, Variable: 250

    printf("Wert: %d, Adresse: %p, Result:%d, Variable: %d\n", *intPointer, intPointer, result, intVariable);

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    return 0;
}
