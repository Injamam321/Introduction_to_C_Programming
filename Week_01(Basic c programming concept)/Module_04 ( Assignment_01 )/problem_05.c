#include <stdio.h>
int main()
{
    
    long long int n;
    scanf("%lld", &n);
    if (n<=1000)
    {
        printf("Bad luck!\n");
    }

    else
    {
        printf("I will buy Punjabi\n");
        n=n-1000;
        if (n>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }

    return 0;
}