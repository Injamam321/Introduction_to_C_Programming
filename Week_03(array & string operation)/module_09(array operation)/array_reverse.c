// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int i=0, j=n-1;
//     while (i<j)
//     {
//         int tmp=ar[i];
//         ar[i]=ar[j];
//         ar[j]=tmp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ar[i]);
//     }

    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Dynamic array allocation
    int *ar = (int *)malloc(n * sizeof(int));
    if (ar == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Array input
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Reverse the array
    int i = 0, j = n - 1;
    while (i < j) {
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
        i++;
        j--;
    }

    // Output the reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    // Free allocated memory
    free(ar);

    return 0;
}
