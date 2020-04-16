#include <stdio.h>

void _function1(void);
void _function2(void);

int main()
{
    for (int index = 0; index < 10; index++)
    {
        _function1();
    }

    printf("\n");

    for (int index = 0; index < 10; index++)
    {
        _function2();
    }

    printf("\n");
}

void _function1(void)
{
    int localVariable = 0;
    printf("%d ", ++localVariable);
}

void _function2(void)
{
    static int localVariable = 0;
    printf("%d ", ++localVariable);
}