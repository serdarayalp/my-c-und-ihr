#include <stdio.h>

#include <sys/types.h>
#include <unistd.h>

/*

fork() in C

Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process). After a new child process is created, both processes will execute the next instruction following the fork() system call. A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process.

It takes no parameters and returns an integer value. Below are different values returned by fork().

Negative Value: 
    creation of a child process was unsuccessful.
Zero: 
    Returned to the newly created child process.
Positive value: 
    Returned to parent or caller. The value contains process ID of newly created child process.
*/

int main()
{

    // make two processes, which run same program after this instruction
    fork();

    printf("Hello world!\n");

    return 0;
}
