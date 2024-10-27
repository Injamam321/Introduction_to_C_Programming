#include <stdio.h>
int main()
{
    char x;
    scanf("%C", &x);
    if (x>= 48 && x<=57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(x>='A' && x<='Z')
        {
            printf("IS CAPITAL\n");
        }
        else{
            printf( "IS SMALL\n");
        }

    }
    return 0;
}