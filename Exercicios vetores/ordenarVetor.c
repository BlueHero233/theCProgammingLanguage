#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"
int main(void){
    int tamanho, limInf, limSup, vetorA[5];
    printf("Insira o tamanho do vetor\n");
    scanf("%d", &tamanho);  // informa tamanho do vetor

    int vetor[tamanho];     // cria vetor com o tamanho informado
    gerarVetorInteiroComFaixa(vetor, tamanho, 5, 50);   // gera os valores do vetor de intervalo (5,50)
    mostrarVetorInteiro(vetor, tamanho);    // imprime o vetor de tamanho preenchido com os valores gerados
    printf("\n");

    ordenarVetor(vetor, tamanho);   // bubblesort do vetor
    mostrarVetorInteiro(vetor, tamanho);    // imprime o vetor ordenado
    printf("\n");

    gerarVetorInteiroDe0aLimite(vetorA, 5, 10); // gera os valores do vetorA com tamanho 5 e intervalo (0,10)
    mostrarVetorInteiro(vetorA, 5); // imprime o vetorA de tamanho preenchido
    printf("\n");

    ordenarVetor(vetorA, 5);    // bubblesort do vetorA
    mostrarVetorInteiro(vetorA, 5); // imprime o vetorA ordenado
    return 0;
}
