#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    scanf("%c",&ch);
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("VOGAL");
    else if(ch>='A'&&ch<='Z')
        printf("CONSOANTE");
    else
        printf("NA");
    return 0;
}