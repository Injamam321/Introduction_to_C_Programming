// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);  // Reading the number of elements
    
//     int max = 0, temp;
    
//     for(int i = 0; i < N; i++) 
//     {
//         scanf("%d", &temp);  // Reading each number
//         if (temp > max) 
//         {
//             max = temp;  // Updating max if the current number is greater
//         }
//     }
    
//     printf("%d\n", max);  // Printing the maximum number
//     return 0;
// }

#include <stdio.h>
int main()
{
    int x;
    scanf("%d ",&x);
    int max=0, a;
    for (int i=1; i<=x; i++)
    {
        scanf("%d", &a);
        if (a>max)
        {
            max=a;
        }
        
    }
    printf("%d\n", max);

    return 0;
}