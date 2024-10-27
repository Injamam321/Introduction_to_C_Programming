#include <stdio.h>

int main() 
{
    int a, b;

    // Taking two integer inputs
    scanf("%d %d", &a, &b);

    // Displaying summation
    printf("%d + %d = %d\n", a, b, a + b);
    
    // Displaying subtraction
    printf("%d - %d = %d\n", a, b, a - b);
    
    // Displaying multiplication
    printf("%d * %d = %d\n", a, b, a * b);
    
    // Displaying division with floating-point precision
    printf("%d / %d = %.2f\n", a, b, (float)a / b);

    return 0;
}
