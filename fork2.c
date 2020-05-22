#include <stdio.h>

#include <sys/types.h>
#include <unistd.h>

int main()
{

    /*
    The number of times "hello" is printed is equal to number of process created. 
    Total Number of Processes = 2^n, where n is number of fork system calls. So here n = 3, 2^3 = 8
    */
    fork();
    fork();
    fork();

    printf("hello\n");

    return 0;
}
