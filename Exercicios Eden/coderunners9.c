#include <stdio.h>
#include <ctype.h>
int main(void){
    int c=0;
    char a;
    while(a!=' ');{
        scanf("%c",&a);
        if(toupper(a)=='A')
            c++;
    }
    printf("%d",c);
}