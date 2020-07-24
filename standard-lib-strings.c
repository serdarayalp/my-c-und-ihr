#include <stdio.h>
#include <string.h> // String Funktionen
#include <ctype.h>  // Character Funktionen

int main()
{

    int i;
    char c;
    char *c_p;
    char matrix_1[50] = "Max ";
    char matrix_2[50] = "Mustermann ";

    c = '5';
    if (isalnum(c))
    {
        printf("Das ist entweder eine Buchstabe oder Zahl\n");
    }

    c = 'a';
    if (isalpha(c))
    {
        printf("Das ist eine Buchstabe\n");
    }

    i = 0x7F;
    if (iscntrl(i)) // ist CTRL-Element? Elemente von 0x0 bis 0x1F, und das Element 0x7F (DEL)
    {
        printf("Das ist ein CTRL-Element\n");
    }

    c = '5';
    if (isdigit(c))
    {
        printf("Das ist eine Zahl\n");
    }

    i = 0x7E;
    if (isgraph(i)) // ist Element schreibbar? Elemente von 0x21 bis 0x7E. SPACE (0x20) wird als nicht schreibbar interpretiert.
    {
        printf("Dieses Character ist schreibbar\n");
    }

    i = 0x20;
    if (isprint(i)) // ist Element printbar? Elemente von 0x20 bis 0x7E. Im Gegensatz zu isgraph() auch SPACE (0x20) dabei.
    {
        printf("Dieses Character ist printbar\n");
    }

    c = 'a';
    if (islower(c))
    {
        printf("Das ist ein kleines Character\n");
    }

    c = 'A';
    if (isupper(c))
    {
        printf("Das ist ein grosses Character\n");
    }

    c = ':';
    if (ispunct(c))
    {
        printf("Das ist ein PUNCT Character\n");
    }

    /*

    List of all white-space characters in C programming are:

    Character       Description
    ----------------------------------------
    ' '             space
    '\n'            newline
    '\t'            horizontal tab
    '\v'            vertical tab
	'\f'            form feed
	'\r'            Carraige return

    */
    c = ' ';
    if (isspace(c))
    {
        printf("Das ist ein WHITE-SPACE Character\n");
    }

    c = 'A';
    if (isxdigit(c))
    {
        printf("Das ist ein HEX Character\n");
    }

    printf("%s\n", strcat(matrix_1, matrix_2));

    c_p = strchr("Das ist ein Test", 'i'); // sucht ein Character im String, wenn gefunden, dann Pointer, sonst NULL
    printf(c_p);
    printf("\n");

    c_p = strstr("Das ist ein Test", "ein"); // sucht ein String in einem anderen String, wenn gefunden, dann Pointer, sonst NULL
    printf(c_p);
    printf("\n");

    printf("%d\n", strcmp("Das ist ein Test", "Das ist ein Test"));

    char m_1[50];
    char m_2[50];
    strcpy(m_1, "Computer");
    strcpy(m_2, "Festplatte");
    printf("%s %s\n", m_1, m_2);
    strcpy(m_1, m_2);
    printf("%s %s\n", m_1, m_2);

    printf("%d\n", strlen("Das ist ein Test."));

    char mx[] = "Max,Mustermann;12345;Berlin;DE";
    char delimiter[] = ",;";
    char *ptr;
    // initialisieren und ersten Abschnitt erstellen
    ptr = strtok(mx, delimiter);
    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        // naechsten Abschnitt erstellen
        ptr = strtok(NULL, delimiter);
    }

    printf("%c\n", tolower('A'));

    printf("%c\n", toupper('a'));

    return 0;
}