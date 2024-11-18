#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d", &n);
    for(i=1; i<=50; i=i+1)
    {
        if (i%2==0)
        {
            printf("%d-Even\n", i);
        }
        else{
            printf("%d_Odd\n",i);
        }
    }
    return 0;
}