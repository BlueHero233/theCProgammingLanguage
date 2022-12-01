/*) Gerar elementos inteiros aleatórios entre 1 e 10 em um 
vetor A de tamanho 10 e criar um vetor B de
mesma dimensão e com os mesmos elementos de A, mas em ordem 
invertida, ou seja, o primeiro elemento
de A será o último de B, o segundo elemento de A será o 
penúltimo de B e assim sucessivamente.*/
#include <stdio.h>
#include "vetores.h"
int main(void)
{
    int vetorA[10], vetorB[10], i, j=0;
    gerarVetorInteiroDe1aLimite(vetorA, 10, 10);
    mostrarVetorInteiro(vetorA, 10);
    putchar('\n');
    for (i = 9; i >= 0; i--){   //o ultimo indice do vetorA vai decrementando
        vetorB[j]=vetorA[i];    //e o primeiro indice do vetorB assume tal valor
        j++;
    }
    mostrarVetorInteiro(vetorB, j);
    putchar('\n');
    return 0;
}