#include <stdio.h>

void copy(char *target, char *quelle);
void cat(char *target, char *quelle);
int len(char *textPointer);

int main()
{
    char charArray[100];

    copy(charArray, "Computer und Monitor...");
    printf(charArray);

    printf("\n");

    char charArray2[100] = "Computer";
    cat(charArray2, " Drucker und Scanner...");
    printf(charArray2);

    printf("\n");

    printf("Laenge des Texts: %d", len("Das ist ein Test"));

    return 0;
}

int len(char *textPointer)
{
    int count;
    while (*textPointer)
    {
        textPointer++;
        count++;
    }
    
    return count;
}

void copy(char *target, char *quelle)
{
    while (*quelle)
    {
        *target = *quelle;
        target++;
        quelle++;
    }
    *target = '\0';
}

void cat(char *target, char *quelle)
{
    while (*target)
    {
        target++;
    }
    while (*quelle)
    {
        *target = *quelle;
        target++;
        quelle++;
    }
    *target = '\0';
}