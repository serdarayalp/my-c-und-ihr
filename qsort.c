#include <stdio.h>
#include <stdlib.h>

int values[] = {88, 56, 100, 2, 25};

int cmpfunc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int n;

    for (n = 0; n < 5; n++)
    {
        printf("%d ", values[n]);
    }

    printf("\n");

    qsort(values, 5, sizeof(int), cmpfunc);

    for (n = 0; n < 5; n++)
    {
        printf("%d ", values[n]);
    }

    printf("\n");

    int toSearch = 88;
    int *p1 = bsearch(&toSearch, values, 5, sizeof(int), cmpfunc);

    if (p1) {
        printf("Die Zahl ist gefunden...");
    } else {
        printf("Die Zahl ist NICHT gefunden...");
    }

    return 0;
}