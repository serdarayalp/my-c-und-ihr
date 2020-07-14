#include <stdio.h>
#include <stdlib.h>

struct _struct
{
    int a;
    int b;
};

typedef struct _struct mein_struct;

int main()
{
    /* 
    mein_struct *p1;
    p1 = (mein_struct *)malloc(sizeof(mein_struct));
    */

    mein_struct ms;
    mein_struct *p1 = &ms;

    p1->a = 10;
    p1->b = 20;

    printf("%d %d\n", p1->a, p1->b);

    return 0;
}