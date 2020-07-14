#include <stdio.h>

// Werte sind durchnummeriert ab 0, also 0, 1, 2, 3 ...
enum farbe {
    rot,
    gelb,
    schwarz,
    blau
};

// Wenn man eigene Werte zuweisen möchte 
enum obst {
    apfel = 1,
    orange = 7,
    mandarin = 8,
    papaya
};


int main()
{
    enum farbe f1;
    f1 = rot;
    printf("%d\n", f1);

    enum obst f2;
    f2 = papaya;
    printf("%d\n", f2);    

    return 0;
}