#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); // input 5 

    int ar[n];
    for (int i = 0; i < n; i++)
    {
            scanf("%d", &ar[i]); //10 20 30 40 50
    }

    int pos;
    scanf("%d", &pos); // position nilam input: 

    for (int i = pos; i <n-1; i++)
    {   

          // 10 20 30 50 ata include korlam 40 bad dilam

        ar[i] = ar[i + 1];
       
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", ar[i]); // 10 20 30 50 ata print korlam
    }
    

    
    return 0;
}