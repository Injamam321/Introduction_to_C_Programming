#include <stdio.h>

int main() 
{
    int num;

    // Taking an integer input
    scanf("%d", &num);

    // Checking if the number is positive, negative, or zero
    if (num > 0) 
    {
        printf("positive\n");
    } 
    else if (num < 0) 
    {
        printf("negative\n");
    } 
    else 
    {
        printf("zero\n");
    }

    return 0;
}
