#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main()
{

    printf("%f\n", cos(0));
    printf("%f\n", cos(PI));

    // sin, tan und cot

    // arccos
    printf("%f\n", acos(-1));
    printf("%f\n", acos(0));
    printf("%f\n", acos(1));

    // arcsin
    printf("%f\n", asin(-1));
    printf("%f\n", asin(0));
    printf("%f\n", asin(1));

    // atan
    // acot

    printf("%f\n", exp(2)); // e hoch 2

    printf("%f\n", fabs(-20));

    // The ceil() function computes the nearest integer greater than the argument passed.
    printf("%lf\n", ceil(87.563465));
    printf("%lf\n", ceil(2.1));

    printf("%lf\n", floor(87.563465));
    printf("%lf\n", floor(2.1));

    printf("%lf\n", log10(100));

    printf("%lf\n", pow(2, 3)); // 2 hoch 3

    printf("%lf\n", sqrt(9));

    return 0;
}