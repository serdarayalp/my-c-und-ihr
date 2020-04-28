#include <stdio.h>
#include <string.h>

int main()
{

    char *namePointer[][4] = {
        {"Serdar", "Ayalp", "1982", "Urfa"},
        {"Semra", "Ayalp", "1992", "Urfa"}};

    char nameToSearch[50] = "Semra";

    for (int index = 0; *namePointer[index][0]; index++)
    {
        if (!strcmp(nameToSearch, namePointer[index][0]))
        {
            printf("%s, %s, %s, %s",
                   namePointer[index][0],
                   namePointer[index][1],
                   namePointer[index][2],
                   namePointer[index][3]);
        }
    }

    printf("\n");
    printf("***************************************************************");
    printf("\n");

    return 0;
}