#include<stdio.h>
#include<string.h> //for using built in function like strlen
int main()
{   
    char a[200],b[100];
    scanf("%s %s",a,b);

    int k=strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        // printf("%d ", i);
        a[k]=b[i];
        k++;
    }
    // a[k]='\0'; //when we need some string copy not full nija null bosia nite hbe 
    printf("%s  %s",a,b); 

    return 0;
        
}