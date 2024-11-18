#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ar[i]);
    }
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=(sum+ar[i]);
    }
    if (sum < 0) 
    {
        sum = -sum;  
    }
    printf("%lld", sum);

    
    return 0;
}