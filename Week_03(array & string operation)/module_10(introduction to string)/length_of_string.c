#include<stdio.h>
#include<string.h>
int main()
{
    char a[23]; 
    scanf("%s",&a);
    int count=0;

    int st=strlen(a); //strlen is built in function for getting string length 
    printf("%d ", st);

// foor loop use for get string length

    // for (int i = 0; a[i]!='\0' ; i++) //string length getting process
    // {
    //     count++;
    // }
    
    // printf("%d \n", count);

// while loop use for get string length

    // int i=0;
    // while (a[i]!='\0')
    // {
    //     count ++;
    //     i++;
    // }
    // printf("%d",count);
    
    
    return 0;

}