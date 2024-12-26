#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]; 

    fgets(a, 24, stdin); //input getting with space 
    a[22]='\0';// for enter button input reduce 

    printf("%s", a);

    return 0;

}