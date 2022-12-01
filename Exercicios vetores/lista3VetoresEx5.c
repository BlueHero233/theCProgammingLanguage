#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"
int main(void){
    int vetorA[10], vetorB[10], vetorC[20], i, j, k;
    gerarVetorIntSemRepeticao(vetorA,10,15);
    mostrarVetorInteiro(vetorA,10);
    putchar('\n');
    gerarVetorIntSemRepeticao(vetorB,10,10);
    mostrarVetorInteiro(vetorB,10);
    putchar('\n');
    for(i=0;i<10;i++){
        vetorC[i]=vetorA[i];
        k++;
    }
    mostrarVetorInteiro(vetorC,10);
    for(i=0;i<10;i++){
        if(ocorreNoVetor(vetorA,10,vetorB[i])==0){
            vetorC[k]=vetorB[i];
            k++;
        }
    }
    return 0;
}
