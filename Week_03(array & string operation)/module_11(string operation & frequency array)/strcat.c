#include<stdio.h>
#include<string.h> //for using built in function strlen or strcpy
int main()
{   
    char a[100],b[100];
    scanf("%s %s",a,b);


    strcat(a,b); //built in function concat for string 

    printf("%s %s",a,b);

    return 0;


}