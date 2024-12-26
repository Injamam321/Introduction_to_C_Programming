#include<stdio.h>
int main(){

    char a[8]; //extra memory create for reduce segmentation fault or rte linux & online judge 
    scanf("%s", &a);
    printf("%s",a);
}