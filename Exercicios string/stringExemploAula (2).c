#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char texto[20];
    int i=0, j;
    printf("Informe uma palavra:\n");
    gets(texto);
    //scanf("%s", texto);    string nao precisa de &, se nao possuir [^/n] le ate o primeiro espaco
    puts(texto);
    //printf("%s\n", texto);
    putchar('\n');
    char string1[21]="Linguagem C";
    char string2[21];
    printf("String1= %s\n", string1);
    while (string1[i]!='\0')
    {
        string2[i]=string1[i];
        i++;
    }
    string2[i]='\0';
    puts(string2);
    while (string1!='\0')
        i++;
    printf("Tamanho da string1: %d", i);
    i-=1;
    for (i; i>=0; i--)
    {
        string2[j]=string1[i];
        j++;
    }
    printf("String2 invertida\n");
    puts(string2);

    return 0;
}