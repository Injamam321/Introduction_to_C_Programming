#include <stdio.h>
#include <string.h> 

int main() 
{
    char S[1005]; 
    scanf("%s", S); 

    int len = strlen(S); 
    int is_palindrome = 1; 

    for (int i = 0; i < len / 2; i++) 
    {
        if (S[i] != S[len - i - 1]) 
        { 
            is_palindrome = 0; 
            break;
        }
    }

    if (is_palindrome) 
    {
        printf("YES\n"); 
    } 
    else 
    {
        printf("NO\n"); 
    }

    return 0;
}
