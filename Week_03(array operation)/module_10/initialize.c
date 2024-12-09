#include <stdio.h>

int main() {


    char a[8]="imjamam";//NULL GARUNTEE

    // char b[8]={'i','m','j','a','m','a','m'};//NULL NO GARUNTEE
    // for (int i = 0; i < 7; i++)
    // {
    //     /* code */printf("%C ", a[i]);
    // }
    int sz= sizeof(a)/sizeof(char);

    printf("%d \n", sz);
    printf("%s \n", a);
    
    // printf("%s", b);
   
    return 0;
}
