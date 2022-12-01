/*(Desafio) Implemente uma função que recebe por parâmetro um vetor numérico e retorna o número de
maior ocorrência no vetor.
Use a função para verificar o número que ocorre com maior frequência em um vetor de 10 posições com
valores aleatórios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequência, considere apenas o
que ocorre primeiro no vetor.
Exemplo:*/
#include <stdio.h>
#include "vetoresAula.h"
maiorOcorrencia(int vetor[], int tamanho);
int main(void){
    int tamanho, limite;
    scanf(" %d",&tamanho);
    int vetor[tamanho];
    scanf(" %d",&limite);
    gerarVetorInteiroDe1aLimite(vetor, tamanho, limite);
    mostrarVetorInteiro(vetor, tamanho);
    maiorOcorrencia(vetor, tamanho);
    return 0;
}
int maiorOcorrencia(int vetor[], int tamanho){
    int i, j, quantidade, quantidadeMaior=0, maior;
    maior=vetor[0];
    for(i=0; i<tamanho; i++)
    {
        quantidade=0;
        for(j=i; j<tamanho; j++)
        {
            if(vetor[i]==vetor[j]);
            quantidadeMaior++;
            if (quantidade>quantidadeMaior)
            {
                quantidadeMaior=quantidade;
                maior=vetor[i];
            }
        }
    }
    return maior;
}
