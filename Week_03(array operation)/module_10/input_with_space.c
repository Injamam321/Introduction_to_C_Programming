#include<stdio.h>
#include<string.h>
int main()
{
    char a[23]; //must be my need memory declare that string size otherwise others compiler give me segmentation fault.

    gets(a); // its work but its not standard for getting input string .

    printf("%s", a);
    
    return 0;

}