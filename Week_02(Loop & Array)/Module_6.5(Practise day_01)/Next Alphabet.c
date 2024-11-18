#include <stdio.h>

int main() 
{
    char C;
    
    // Read the input character
    scanf("%c", &C);
    
    // Determine the next character
    if (C == 'z') 
    {
        // Wrap around case
        printf("a\n");
    } 
    else 
    {
        // Print the next character
        printf("%c\n", C + 1);
    }
    
    return 0;
}
