#include <stdio.h>

int main() 
{
    int num;

    // Taking a non-negative integer input
    scanf("%d", &num);

    // Checking if the number is even or odd
    if (num % 2 == 0) 
    {
        printf("even\n");
    } 
    else 
    {
        printf("odd\n");
    }

    return 0;
}
