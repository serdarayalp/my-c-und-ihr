#include <stdio.h>

int main()
{
    int d1, d2;

    d1 = 10;
    d2 = 20;

    printf("%d ", d1 == d2);
    printf("%d ", d1 > d2);
    printf("%d ", d1 < d2);
    printf("%d \n", d1 != d2);

    printf("*****************************************************\n");

    char meinCharVar;
    printf("Bitte geben Sie eine Buchstabe ein: ");
    meinCharVar = getchar();

    if (meinCharVar >= 'a' && meinCharVar <= 'z')
    {
        printf("Sie haben eine kleine Buchstabe eingegeben.");
    }

    if (meinCharVar >= 'A' && meinCharVar <= 'Z')
    {
        printf("Sie haben eine grosse Buchstabe eingegeben.");
    }
}