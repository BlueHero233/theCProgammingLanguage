#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void gerarVetorInteiroDe0aLimite(int vet[], int tam, int lim){
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
        vet[i] = rand()  % (lim + 1); //para gerar valores de 0 a limite
}
void gerarVetorInteiroDe1aLimite(int vet[], int tam, int lim){
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
        vet[i] = rand()  % lim + 1; //para gerar valores de 1 a limite
}
void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup){
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
        vet[i] =  rand() % ((limSup - limInf) + 1) + limInf; // de 5 a 15 => ((15-5)+1)=>11 => rand()%11+5=> gera numeros de 0 a 10 e soma 5 ao numero sorteado para ficar entre 5 e 15
}
void mostrarVetorInteiro(int vet[], int tam){
    int i;
    for(i=0; i<tam; i++)
        printf("%d ", vet[i]);
}
void mostrarVetorFloat(float vetor[], int tam){
    int i;
    for(i=0;i<tam;i++)
        printf("%.1f\t", vetor[i]);
    printf("\n");
}
float somarVetorFloat(float vetor[], int tam){
    int i, soma=0;
    for(i=0;i<tam;i++)
        soma+=vetor[i];
    return soma;
}
void ordenarVetor(int vetor[], int tamanho){
    int i, aux, j;
    for (i=tamanho--;i>0;i--){   //varre o vetor
        for (j=0;j<i;j++){   //comparar o primeiro elemento do vetor com o segundo
            if (vetor[j]>vetor[j+1]){    //troca de posicao
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
}
void gerarVetorFloatDe0a1(float vetor[], int tamanho){
    int i;
    srand(time(NULL));
    for(i=0;i<tamanho;i++)
        vetor[i]=(float)(rand())/RAND_MAX;
}
void gerarVetorFloatDe0a100(float vetor[], int tamanho){
    int i;
    srand(time(NULL));
    for(i=0;i<tamanho;i++)
        vetor[i]=100*(float)(rand())/RAND_MAX;
}
void gerarVetorIntSemRepeticao(int vetor[], int tamanho, int limite){
    int i, j;
    srand(time(NULL));
    for(i=0;i<tamanho;i++){
        vetor[i]=rand()%limite+1;
        for(j=0;j<i;j++){
            if(vetor[i]==vetor[j]){
                i--;
                break;
            }
        }
    }
}
int ocorreNoVetor(int vet[], int tamanho, int valor)
{
    int i, cont=0;
    for(i=0;i<tamanho;i++){
        if (vet[i]==cont);
        cont++;
    }
    return cont;
}
