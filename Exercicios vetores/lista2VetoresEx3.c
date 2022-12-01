/*
Com o protótipo void gerarVetorFloat0a1(float vetor[], int tam) para gerar
valores float aleatórios entre 0 e 1 em um vetor. Use vetor[i] = (float)(rand()) /
RAND_MAX; para gerar valores aleatórios entre 0 e 1.
b) Com o protótipo void gerarVetorFloat0a100(float vetor[], int tam) para gerar
valores float aleatórios entre 0 e 100 em um vetor. Use vetor[i] = ((float)(rand()) /
RAND_MAX)*100; para gerar valores aleatórios entre 0 e 100.
c) Com o protótipo void mostrarVetorFloat(float vetor[], int tam) para mostrar
os elementos de um vetor float.
d) Com o protótipo float somarVetorFloat(float vetor[], int tam) para somar os
elementos de um vetor float.

Gerar um vetor float com 10 elementos aleatórios entre 
0 e 1, exibir o vetor e mostrar a soma de todos os
elementos do vetor.
b) Gerar um vetor float com 50 elementos aleatórios entre 
0 e 100 e exibir o vetor. Criar outros dois vetores
numéricos do tipo float, em um deles armazenar os valores 
menores que 50 e em outro os maiores que 50.
Mostrar os vetores gerados.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"
int main(void){
    float vetorA[10], vetorB[50];

    gerarVetorFloatDe0a1(vetorA, 10);
    mostrarVetorFloat(vetorA, 10);
    printf("%f\n", somarVetorFloat(vetorA, 10));

    gerarVetorFloatDe0a100(vetorB, 50);
    mostrarVetorFloat(vetorB, 50);
    printf("%f\n", somarVetorFloat(vetorB, 50));
    return 0;
}
