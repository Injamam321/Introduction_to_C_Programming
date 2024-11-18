// #include <stdio.h>
// int main() 
// {
//     int N;
    
//     // Read the size of the array
//     scanf("%d", &N);

//     int A[N]; // Declare an array of size N

//     // Read the array A
//     for (int i = 0; i < N; i++) 
//     {
//         scanf("%d", &A[i]);
//     }

//     int X, V;
    
//     // Read the index X and the value V
//     scanf("%d %d", &X, &V);
    
//     // Update the array at index X with value V
//     A[X] = V;
    
//     // Print the array in reverse order
//     for (int i = N - 1; i >= 0; i--) 
//     {
//         printf("%d ", A[i]);
//     }
    
//     return 0;
// }



#include <stdio.h>

int main()
{
    int n, x, v;
    scanf("%d", &n); 
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]); 
    }
    scanf("%d %d", &x, &v); 
    a[x] = v; 
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", a[i]); 
    }
    return 0;
}

