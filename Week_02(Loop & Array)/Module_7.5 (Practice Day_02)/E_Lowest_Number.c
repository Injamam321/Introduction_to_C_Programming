#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &A[i]);
    }
    int min_value = A[0];
    int min_index = 0;

    for (int i = 1; i < N; i++) 
    {
        if (A[i] < min_value) 
        {
            min_value = A[i];
            min_index = i;
        }
    }

    printf("%d %d\n", min_value, min_index + 1);

    return 0;
}
