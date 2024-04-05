#include <stdio.h>
#include <ctype.h>
int main(void){
    char a;
    scanf("%c",&a);
    a=toupper(a);
    printf("%d",a-64);
    return 0;
}