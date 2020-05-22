#include <stdio.h>

#include <sys/types.h>
#include <unistd.h>

int main()
{

    /*
    In the above code, a child process is created. fork() returns 0 in the child process 
    and positive integer in the parent process. Here, two outputs are possible because 
    the parent process and child process are running concurrently. So we don’t know whether 
    the OS will first give control to the parent process or the child process.

    Important: Parent process and child process are running the same program, but it does not 
    mean they are identical. OS allocate different data and states for these two processes, 
    and the control flow of these processes can be different. See next example:
    */

    if (fork() == 0) // child process because return value zero
    {
        printf("Hello from Child!\n");
    }
    else // parent process because return value non-zero.
    {
        printf("Hello from Parent!\n");
    }

    return 0;
}
