/*) Gerar elementos inteiros e aleatórios entre 1 e 25 em um vetor de tamanho 15. Gerar outros dois vetores,
um contendo os valores pares e outro os ímpares e mostrar os três vetores.
Exemplo:*/
#include <stdio.h>
#include "vetores.h"
int main(void)
{
    int vetorA[15], vetorB[15], vetorC[15], i, j = 0, k = 0;    //var i j k indices dos vetores A B C
    gerarVetorInteiroDe1aLimite(vetorA, 15, 25);    //gera vetor tamanho 15 limite 1->25
    mostrarVetorInteiro(vetorA, 15);    //Imprime vetor 
    putchar('\n');
    for (i = 0; i < 15; i++)
    {
        if (vetorA[i] % 2 == 0) //checa se vetor no indice 0 eh par
        {
            vetorB[j] = vetorA[i];  //vetor dos pares assume tal valor
            j++;    //incremento do tamanho
        }
        else    //senao
        {
            vetorC[k] = vetorA[i];  //vetor dos impares assume tal valor
            k++;    //incremento do tamanho
        }
    }
    mostrarVetorInteiro(vetorB, j);
    putchar('\n');
    mostrarVetorInteiro(vetorC, k);
    putchar('\n');
    return 0;
}