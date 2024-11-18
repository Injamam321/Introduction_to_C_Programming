#include <stdio.h>

int main() 
{
    char C;
    scanf("%c", &C);

    if (C == 'z') 
    {
        printf("a\n");
    } 
    else 
    {
        printf("%c\n", C + 1);
    }
    
    return 0;
}
