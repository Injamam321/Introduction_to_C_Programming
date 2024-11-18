
#include <stdio.h>

int main() {
    int N;
    int found = -1;  // Initialize to -1 to indicate "not found" by default
    unsigned int X;

    // Read the number of elements
    scanf("%d", &N);

    // Declare the array
    unsigned int A[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%u", &A[i]);
    }

    // Read the number X to search for
    scanf("%u", &X);

    // Search for X in the array
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            found = i;  // Record the index of the first occurrence
            break;      // Exit the loop as soon as we find X
        }
    }

    // Output the result
    printf("%d\n", found);

    return 0;
}
