#include<stdio.h>
int main()
{
    int a,b;
    char t;

    scanf("%d%c %d%c", &a,&t, &b, &t);
    printf("%d%% %d%%",a,b);
    return 0;
}