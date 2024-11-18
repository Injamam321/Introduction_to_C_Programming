#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int isPalindrome = 1; // ধরি অ্যারেটি Palindrome

    // প্রথম থেকে এবং শেষ থেকে মিলিয়ে দেখা
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - i - 1]) {
            isPalindrome = 0; // যদি কোনো উপাদান মেলে না, তাহলে Palindrome নয়
            break;
        }
    }

    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
