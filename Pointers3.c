#include <stdio.h>

int main()
{

    int *p;
    int a = 100;
    p = &a;

    printf("Pointer beinhaltet die Adresse (Variable) ist: %p\n", p);
    printf("Wert der Variable ueber den Pointer ist: %d\n", *p);

    printf("***************************************************************");
    printf("\n");

    // p++; // Adresse im Pointer erhöht sich und damit ändert sich der Wert, auf den er zeigt
    // ++p; // Adresse im Pointer erhöht sich und damit ändert sich der Wert, auf den er zeigt

    // ++*p;   // der Wert, auf den der Pointer zeigt, erhöht sich. Adresse im Pointer ändert sich nicht
    // ++(*p); // der Wert, auf den der Pointer zeigt, erhöht sich. Adresse im Pointer ändert sich nicht
    // ++*(p); // der Wert, auf den der Pointer zeigt, erhöht sich. Adresse im Pointer ändert sich nicht

    *p++;   // Pointer moves to the next int position (as if it was an array). But returns the old content
    // (*p)++; // The value of ptr is incremented
    // *(p)++; // Pointer moves to the next int position (as if it was an array). But returns the old content
    // *++p;   // Pointer moves to the next int position, and then get's accessed, with your code, segfault
    // *(++p); // Pointer moves to the next int position, and then get's accessed, with your code, segfault

    printf("Pointer beinhaltet die Adresse (Variable) ist: %p\n", p);
    printf("Wert der Variable ueber den Pointer ist: %d\n", *p);

    return 0;
}
