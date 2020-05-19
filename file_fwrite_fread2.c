#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *filePointer;
    float mx[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float mx_2[5];

    filePointer = fopen("File.txt", "wb");

    fwrite(mx, sizeof mx, 1, filePointer);

    fclose(filePointer);

    filePointer = fopen("File.txt", "rb");

    fread(mx_2, sizeof mx_2, 1, filePointer);

    for (int i = 0; i < 5; i++)
    {
        printf("%f, ", mx_2[i]);
    }

    printf("\n");

    fclose(filePointer);

    return 0;
}