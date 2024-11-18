#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        /* code */scanf("%d\n",&ar[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        /* code */printf("%d\n",ar[i]);
    }
    

    // printf("%d", n);
    return 0;
}