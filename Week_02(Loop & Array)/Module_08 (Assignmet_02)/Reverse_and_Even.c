// #include <stdio.h>
// int main() 
// {
//     int n;
//     scanf("%d", &n); 

//     int a[n];
//     for (int i = 0; i < n; i++) 
//     {
//         scanf("%d", &a[i]); 
//     }

//     for (int i = n - 1; i >= 0; i--) 
//     {
//         if (i % 2 == 0) 
//         {
//             printf("%d ", a[i]); 
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // আরে সাইজ ইনপুট নিন

    int a[n]; // অ্যারে ডিফাইন করুন

    // অ্যারের মান ইনপুট নিন
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    // শুধুমাত্র even index গুলোর মান reverse order এ প্রিন্ট করুন
    for (int i = n - 1; i >= 0; i--) 
    {
        if (i % 2 == 0)
         
        { // যদি ইনডেক্স even হয়
            printf("%d ", a[i]);
        }
    }

    return 0;
}
