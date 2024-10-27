#include <stdio.h>

int main() 
{
    int N;
    
    // Reading the number of elements
    scanf("%d", &N);
    
    int numbers[N];
    
    // Reading the N numbers
    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &numbers[i]);
    }
    
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    
    // Processing each number
    for(int i = 0; i < N; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            evenCount++;  // Counting even numbers
        } 
        else 
        {
            oddCount++;   // Counting odd numbers
        }
        
        if (numbers[i] > 0) 
        {
            positiveCount++;  // Counting positive numbers
        } 
        else if (numbers[i] < 0) 
        {
            negativeCount++;  // Counting negative numbers
        }
    }
    
    // Printing the results
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);
    
    return 0;
}
