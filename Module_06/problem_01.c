// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     if (n==1)
//     {
//          printf("%d\n", -1);
//     }
//     else
//     {
//          for(int i=2; i<=n; i=i+2)
//             {
        
//             printf("%d\n", i);
        
//             }
//     }
   
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    if (n<2)
    {
        printf("-1\n");
    }

    
    return 0;
}