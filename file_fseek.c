#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        The C library function 
            int fseek(FILE *stream, long int offset, int whence) 
        sets the file position of the stream to the given offset.

    This function returns zero if successful, or else it returns a non-zero value.

    ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    stream − This is the pointer to a FILE object that identifies the stream.
    offset − This is the number of bytes to offset from whence.
    whence − This is the position from where offset is added. It is specified by one of the following constants −

    ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    1   SEEK_SET    Beginning of file
    2 	SEEK_CUR    Current position of the file pointer
    3 	SEEK_END    End of file
    */

    FILE *fp;

    fp = fopen("file.txt", "w+");
    fputs("This is tutorialspoint.com", fp);

    fseek(fp, 7, SEEK_SET);
    fputs(" C Programming Language", fp);

    fclose(fp);

    return 0;
}