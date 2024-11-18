#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Check all combinations of operations
    // a, b, c can be used with +, -, * in all positions

    // Additions and Subtractions
    if (a + b + c == d ||
        a + b - c == d ||
        a - b + c == d ||
        b + c - a == d ||
        b + a - c == d ||
        c + a - b == d ||
        c + b - a == d) 
        {
        printf("YES\n");
        return 0;
    }

    // Multiplications and other combinations
    if (a * b + c == d ||
        a + b * c == d ||
        a * b - c == d ||
        a - b * c == d ||
        b * c + a == d ||
        b + c * a == d ||
        c * a + b == d ||
        c + a * b == d) {
        printf("YES\n");
        return 0;
    }

    printf("NO\n");
    return 0;
}
