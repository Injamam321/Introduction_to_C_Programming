#include <stdio.h>

int check_expression(int a, int b, int c, int d) {
    // Check all combinations of operators (+, -, *)
    if (a + b + c == d) return 1;  // a + b + c
    if (a + b - c == d) return 1;  // a + b - c
    if (a + b * c == d) return 1;  // a + b * c
    if (a - b + c == d) return 1;  // a - b + c
    if (a - b - c == d) return 1;  // a - b - c
    if (a - b * c == d) return 1;  // a - b * c
    if (a * b + c == d) return 1;  // a * b + c
    if (a * b - c == d) return 1;  // a * b - c
    if (a * b * c == d) return 1;  // a * b * c
    return 0;  // If no valid operation gives d
}

int main() {
    int a, b, c, d;
    // Read the input values
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Check if we can form d with a, b, c using the allowed operations
    if (check_expression(a, b, c, d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
