#include<stdio.h>
#include<string.h> //for using built in function strlen or strcpy
int main()
{   
    char a[100],b[100];
    scanf("%s %s",a,b);

    int val=strcmp(a,b); //strcmp is built in function for string copy 
    
    if (val>0)
    {
        printf("B is lexicographically smaller");

    }
    else if (val<0)
    {
        printf("A is lexicographically smaller");
    }
    else
    {
        printf("A & B are lexicographically same");
    }

    return 0;
}