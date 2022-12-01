#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char texto[20];
    char text2[20]=("Progamacao");
    printf("Informe uma palavra:\n");
    scanf("%s", texto);    //string nao precisa de &, se nao possuir [^/n] le ate o primeiro espaco
    gets(texto); 
    printf("%s\n", texto);
    return 0;
}