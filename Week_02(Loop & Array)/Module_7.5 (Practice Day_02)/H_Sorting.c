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

    // বাবল সোর্ট এলগরিদম
    for (int i = 0; i < N - 1; i++) 
    {
        for (int j = 0; j < N - i - 1; j++) 
        {
            if (A[j] > A[j + 1]) 
            {
                // যদি বাম পাশের উপাদান ডান পাশের চেয়ে বড় হয়, তাহলে তাদের অদল-বদল করা হবে
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // সঠিকভাবে সাজানো উপাদানগুলো প্রিন্ট করা
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
