#include <stdio.h>

int main() 
{
    int money;

    // Taking input for how much money she has
    scanf("%d", &money);

    // Checking the conditions based on the amount of money
    if (money >= 10000) 
    {
        printf("Gucci Bag\n");
        if (money > 20000) 
        {
            printf("Gucci Belt\n");
        }
    } 
    else if (money >= 5000) 
    {
        printf("Levis Bag\n");
    } 
    else 
    {
        printf("Something\n");
    }

    return 0;
}
