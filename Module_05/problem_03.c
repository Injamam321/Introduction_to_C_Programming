// #include <stdio.h>

// int main() 
// {
//     char X;
    
//     // Input the character
//     scanf("%c", &X);
    
//     // Check if X is lowercase
//     if (X >= 'a' && X <= 'z') 
//     {
//         // Convert to uppercase by subtracting 32
//         printf("%c\n", X - 32);
//     } 
//     else 
//     {
//         // Convert to lowercase by adding 32
//         printf("%c\n", X + 32);
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a>=97 && a<=122)
    {
        char result=a-32;
        printf("%c",result);
    }
    else
    {
        char result=a+32;
        printf("%c", result);
    }
    return 0;
}