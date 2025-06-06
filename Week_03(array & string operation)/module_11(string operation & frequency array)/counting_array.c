#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count[7] = {0};
    for (int i = 0; i < n; i++) {
        int val = a[i];
        count[val]++;
    }

    for (int i = 0; i < 7; i++) { // Loop condition corrected to 7
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}
