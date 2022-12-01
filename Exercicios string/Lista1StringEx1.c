/*Ler uma string de até 100 caracteres, contar e exibir a quantidade de 
cada uma das vogais existentes nessa string. Armazenar essas quantidades 
em um vetor. É indispensável armazenar a quantidade no vetor à
medida que a string é percorrida na forma vetVogais[indice]++. 
Portanto, o vetor que armazena a quantidade de vogais deve ser 
inicializado com zero antes de ser utilizado. Mostrar os resultados 
da seguinte forma:*/
#include "vetores.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char string1[100];
    int i=0, contVog=0;
    printf("Infome um texto de ate 100 caracteres:\n");
    gets(string1);
    while (string1[i]!='\0')    
    {
        switch (string1[i])
        {
        case 'A':
        case 'a':
            contVog++;
            break;
        case 'B':
        case 'b':
            contVog++;
            break;
        case 'C':
        case 'c':
            contVog++;
            break;
        case 'D':
        case 'd':
            contVog++;
            break;
        case 'E':
        case 'e':
            contVog++;
            break;
        default:
            break;
        }
    }
    return 0;
}