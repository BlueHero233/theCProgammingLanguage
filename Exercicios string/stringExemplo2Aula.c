#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int quantidadeSemEspacos(char vetor[]);
int quantidadeComEspacos(char vetor[]);
int main(void){
    char texto[151];
    printf("Informe um texto de ate 150 caracteres: \n");
    gets(texto);
    printf("Quantidade de caracteres com espacos %d\n", quantidadeComEspacos(texto));
    printf("Quantidade de caracteres sem espacos %d\n", quantidadeSemEspacos(texto));
}
int quantidadeComEspacos(char vetor[]){
    int i=0;
    while (vetor[i]!='\0')
        i++;
    return i;
}
int quantidadeSemEspacos(char vetor[]){
    int i=0, cont=0;
    while (vetor[i]!='\0'){
        if (vetor[i]!=' ')
            cont++;
        i++;
    }
    return cont;
}