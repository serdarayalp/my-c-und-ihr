#include <stdio.h>

void concatenate(char *text1, char *text2);

int main()
{

    char text1Array[50] = "Das ist ein ";
    concatenate(text1Array, "Test...");

    printf("%s\n", text1Array);

    return 0;
}

void concatenate(char *text1, char *text2)
{
    while (*text1)
    {
        text1++;
    }

    if (*text2)
    {
        *text1 = *text2;

        text1++;
        text2++;

        concatenate(text1, text2);
    }
    else
    {
        *text1 = '\0';
    }
}
