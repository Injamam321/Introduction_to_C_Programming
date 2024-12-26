#include<stdio.h>
#include<string.h> //for using built in function strlen or strcpy
int main()
{   
    char a[100],b[100];
    scanf("%s %s",a,b);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i]=b[i]; //own logic
    // }

strcpy(a,b); //built in function use

printf("%s %s", a,b);
return 0;
}