/*(Desafio) Implemente uma fun��o que recebe por par�metro um vetor num�rico e retorna o n�mero de
maior ocorr�ncia no vetor.
Use a fun��o para verificar o n�mero que ocorre com maior frequ�ncia em um vetor de 10 posi��es com
valores aleat�rios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequ�ncia, considere apenas o
que ocorre primeiro no vetor.
Exemplo:*/
#include <stdio.h>
#include "vetores.h"
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
