#include <stdio.h>

int main()
{

    char charArray[50];

    printf("Bitte geben Sie einen Text ein: ");

    // scanf("%[compu]", charArray); 
    // scanf("%[h-p]", charArray); 
    // scanf("%[^hkpz]", charArray); // Alles außer diesen Buchstaben 
    scanf("%[^A-Z]", charArray);
    
    printf("%s\n", charArray);
    

}