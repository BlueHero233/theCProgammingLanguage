/*Ler uma string e contar os espaços em branco que ocorrem no início, entre as palavras e no final da string,
e armazenar a contagem em um vetor. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Construir
uma matriz de n linhas e duas colunas, sendo que n representa a quantidade de elementos do vetor (se o
elemento ocorrer mais de uma vez, considerar apenas uma ocorrência). Na segunda coluna da matriz
armazenar a quantidade de repetições de cada elemento no vetor. Mostrar a matriz.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[255];
    int espaco=0, i, j, k, aux, n, m=2, matriz[n][m], vetor[255];
    gets(string);
    i=0;
    j=0;
    while (i<=string[i]){
        if(string[i]==' '){
            espaco++;
            i++;
        }
        else{
            vetor[j]=espaco;
            espaco=0;
            j++;
            i++;
        }
    }
    for (k = 0; k < j; k++)
        printf("%d\t", vetor[k]);
    putchar('\n');
    for (i = 49; i > 0; i--){
        for ( j = 0; j < i; j++){
            if (vetor[j]>vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    for (j = 0; j < 50; j++)
        printf("%d\t", vetor[j]);
    putchar('\n');
    return 0;
}