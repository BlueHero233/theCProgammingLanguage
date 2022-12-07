/*) Ler uma string e copiar o valor decimal do código ASCII de cada elemento da string para um vetor. Mostrar
o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Percorrer o vetor ordenado contando, sem repetição, os
números pares e os números ímpares e mostrar a soma total desses valores. Criar um vetor chamado vPares
e um vetor chamado vImpares e copiar, sem repetição, os elementos pares e ímpares para os respectivos
vetores. Mostrar os dois vetores. Criar uma matriz chamada mPares e uma matriz chamada mImpares, sendo
que mPares deverá conter na primeira coluna todos os elementos pares do vetor e na segunda coluna a
quantidade de ocorrências de cada elemento par no vetor e na matriz mImpares fazer o mesmo com os
elementos ímpares. Mostrar as duas matrizes.
Exemplo:
*/
#include <stdio.h>
#include <string.h>
#define size 100
int main(void)
{
    char string[size];
    int i=0, j=0, vetor[size], aux;
    gets(string);
    while (vetor[i]!='\0'){
        if (vetor[i]==' ')
            i++;
        else
            vetor[i]=string[i], i++;
    }
    for (i = 0; i < size; i++)
        printf("%d\t", vetor[i]);
    putchar('\n');
    for (i = size-1; i > 0; i--){   //comeca no final, decrementa ate ser igual a zero
        for (j = 0; j < i; j++){
            if (vetor[j]>vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    for (i = 0; i < size; i++)
        printf("%d\t", vetor[i]);
    return 0;
}