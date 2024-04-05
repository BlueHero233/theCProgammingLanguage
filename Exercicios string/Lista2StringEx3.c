/*Criar uma função para concatenar duas strings*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i, j;
    char string1[100], string2[100];
    printf("Insira a primeira string\n");
    gets(string1);
    printf("Insira a segunda string\n");
    gets(string2);
    i=0;
    while(string1[i]!='\0')
        i++;
    j=0;
    while (string2[j]!='\0'){
        string1[i]=string2[j];
        i++;
        j++;
    }
    string1[i]='\0';
    puts(string1);
    return 0;
}