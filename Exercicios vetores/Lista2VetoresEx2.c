/*Gerar um vetor com 20 elementos aleatorios entre 5 e 20. 
Ordenar o vetor. Percorrer o vetor ordenado e
mostrar os pares e a soma dos pares de cada um dos valores 
armazenados. Caso existam elementos repetidos, considerar 
apenas um deles. Neste exercicio, alem de utilizar a funcao 
gerarVetorInteiroComFaixa(), a funcao mostrarVetorInteiro() 
e a funcao ordenarVetorInteiro(), criar também função 
mostrarPares(), que recebe um número e mostra todos os
números pares positivos ate esse número, e função 
somarPares(), que recebe um número e retorna a soma
de todos os números pares positivos ate esse número. 
As funcoes mostrarPares() e somarPares()devem ser
criadas ema biblioteca chamada "pares.h".
*/
#include <stdio.h>
#include "vetores.h"
#include "pares.h"
int main(void)
{
    int vetorA[20], i, j, soma;
    gerarVetorInteiroComFaixa(vetorA, 20, 5, 20);
    mostrarVetorInteiro(vetorA, 20);
    ordenarVetor(vetorA, 20);
    mostrarVetorInteiro(vetorA, 20);
    for (i = 0; i < 20; i++)
    {
        printf("%d => ", vetorA[i]);
        mostrarPares(vetorA[i]);
        
        
    }
    
    return 0;
}