#include <stdio.h>

struct time
{
    unsigned int hour : 5;
    unsigned int minute : 6;
};

int main(int argc, char const *argv[])
{

    struct time _time;

    _time.hour = 13;
    _time.minute = 37;

    printf("Zeit: %02d : %02d\n", _time.hour, _time.minute);

    return 0;
}
