#include <stdio.h>
#include <string.h> 

int main() 
{
    char A[11], B[11]; 
    scanf("%s %s", A, B); 


    int lenA = strlen(A);
    int lenB = strlen(B);
    printf("%d %d\n", lenA, lenB);


    printf("%s%s\n", A, B);

    
    char temp = A[0]; 
    A[0] = B[0]; 
    B[0] = temp; 

    printf("%s %s\n", A, B); 

    return 0;
}
