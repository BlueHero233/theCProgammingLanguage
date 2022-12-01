/*) Gerar valores inteiros aleatórios nos vetores A e B, sendo A com n 
elementos entre 1 e 20 e B com n elementos entre 1 e 15. O usuário 
informa a quantidade de elementos dos vetores, ou seja, o seu tamanho.
Validar para que seja informado um valor positivo o tamanho do vetor. 
Mostrar os elementos dos vetores A e B. Construir um vetor C, em que 
cada elemento de C sera 1 quando o elemento de A for maior que o
respectivo elemento em B; sera 0 quando o elemento de A for igual ao 
respectivo elemento em B; e sera -1 quando o elemento de A for menor 
que o respectivo elemento em B. Mostrar os elementos do vetor C.
*/
#include "vetores.h"
#include <stdio.h>
int main(void)
{
    int i, tamanhoA, tamanhoB, tamanhoC;
    printf("Informe o tamanho do vetor A:\n");
    do
    {   
        scanf("%d", &tamanhoA);
        if(tamanhoA<0)
            printf("Tamanho invalido\n");
    } while (tamanhoA<0);   //validacao do tamanho do vetorA
    printf("Informe o tamanho do vetor B:\n");
    do
    {   
        scanf("%d", &tamanhoB);
        if(tamanhoB<0)
            printf("Tamanho invalido\n");
    } while (tamanhoB<0);   //validacao do tamanho do vetorB
    int vetorA[tamanhoA], vetorB[tamanhoB];
    gerarVetorInteiroDe1aLimite(vetorA, tamanhoA, 20);
    gerarVetorInteiroDe1aLimite(vetorB, tamanhoB, 15);
    mostrarVetorInteiro(vetorA, tamanhoA);
    putchar('\n');
    mostrarVetorInteiro(vetorB, tamanhoB);
    putchar('\n');
    if (tamanhoA>tamanhoB)  //se tamanhoA eh maior do que tamanhoB
        tamanhoC=tamanhoA;  //tamanhoC assume tal valor
    else
        tamanhoC=tamanhoB;  //se nao tamanhoC assume tamanhoB
    int vetorC[tamanhoC];
    for (i = 0; i < tamanhoC; i++)
    {
        if (vetorA[i]>vetorB[i])
            vetorC[i]=1;
        else if (vetorA[i]<vetorB[i])
            vetorC[i]=-1;
        else
            vetorC[i]=0;
    }
    mostrarVetorInteiro(vetorC, tamanhoC);
    return 0;
}