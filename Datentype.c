#include <stdio.h>

int main()
{
    printf("'char' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(char), 8 * sizeof(char));
    printf("'signed char' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(signed char), 8 * sizeof(signed char));
    printf("'unsigned char' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(unsigned char), 8 * sizeof(unsigned char));

    printf("*****************************************************\n");

    printf("'short int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(short int), 8 * sizeof(short int));
    printf("'signed short int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(signed short int), 8 * sizeof(signed short int));
    printf("'unsigned short int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(unsigned short int), 8 * sizeof(unsigned short int));
    
    printf("*****************************************************\n");

    printf("'int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(int), 8 * sizeof(int));
    printf("'signed int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(signed int), 8 * sizeof(signed int));
    printf("'unsigned int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(unsigned int), 8 * sizeof(unsigned int));

    printf("*****************************************************\n");

    printf("'long int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(long int), 8 * sizeof(long int));
    printf("'signed long int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(signed long int), 8 * sizeof(signed long int));
    printf("'unsigned long int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(unsigned long int), 8 * sizeof(unsigned long int));

    printf("*****************************************************\n");

    printf("'long long int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(long long int), 8 * sizeof(long long int));
    printf("'signed long long int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(signed long long int), 8 * sizeof(signed long long int));
    printf("'unsigned long long int' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(unsigned long long int), 8 * sizeof(unsigned long long int));

    printf("*****************************************************\n");

    printf("'float' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(float), 8 * sizeof(float));

    printf("*****************************************************\n");

    printf("'double' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(double), 8 * sizeof(double));

    printf("*****************************************************\n");

    printf("'long double' ist %lu Byte(-s) bzw. %lu Bit(-s) \n", sizeof(long double), 8 * sizeof(long double));

    return 0;
}