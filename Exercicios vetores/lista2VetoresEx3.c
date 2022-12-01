#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetoresAula.h"
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
