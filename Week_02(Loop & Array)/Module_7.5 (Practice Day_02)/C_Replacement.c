#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &A[i]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        if (A[i] > 0) {
            A[i] = 1;  
        } 
        else if (A[i] < 0) 
        {
            A[i] = 2;  
        }
        
    }
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    

    return 0;
}