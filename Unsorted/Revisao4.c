/*) Ler uma string e copiar o valor decimal do código ASCII de cada elemento da string para um vetor. 
Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. 
Percorrer o vetor ordenado contando, sem repetição, os números pares e os números ímpares e mostrar a soma total desses valores. 
Criar um vetor chamado vPares e um vetor chamado vImpares e copiar, sem repetição, os elementos pares e ímpares para os respectivos
vetores. Mostrar os dois vetores. Criar uma matriz chamada mPares e uma matriz chamada mImpares, sendo
que mPares deverá conter na primeira coluna todos os elementos pares do vetor e na segunda coluna a
quantidade de ocorrências de cada elemento par no vetor e na matriz mImpares fazer o mesmo com os
elementos ímpares. Mostrar as duas matrizes.
Exemplo:
*/
#include <stdio.h>
#include <string.h>
#define size 100
void printVetor(int vetor[], int tam);
int main(void)
{
    char string[size];
    int tam=0, i, j, k, aux, contPar=0, contImpar=0, cont;
    gets(string);
    while (string[tam]!='\0')
        tam++;
    int vetor[tam];
    for (i=0; i<tam; i++)
        vetor[i]=string[i];
    void printVetor(int vetor[], int tam);
    putchar('\n');
    for (i = tam-1; i > 0; i--){   
        for (j = 0; j < i; j++){
            if (vetor[j]>vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    void printVetor(int vetor[], int tam);
    putchar('\n');

    for (i = 0; i < tam; i++){
        if (vetor[i]%2==0){
            if (vetor[i]!=vetor[i-1])
                contPar++;
        }
        else{
            if (vetor[i]!=vetor[i-1])
                contImpar++;
        }
    }

    printf("\nNumero de pares: %d",contPar);
    printf("\nNumero de impares: %d",contImpar);
    int vPar[contPar], vImpar[contImpar], mPar[contPar][2], mImpar[contImpar][2];
    j=0;
    k=0;
    for (i = 0; i < contPar; i++){
        if (vetor[i]%2==0){
            if (vetor[i]!=vetor[i-1]){
                vPar[j]=vetor[i];
                j++;
            }
        }
    }

    for (i = 0; i < contImpar; i++){
        if (vetor[i]%2!=0){
            if (vetor[i]!=vetor[i-1]){
                vImpar[k]=vetor[i];
                k++;
            }
        }
    }

    for (i = 0; i<contPar; i++){
        mPar[i][0]=vPar[i];
        cont=0;
        for (j=0; j<tam; j++){
            if(vPar[i]==vetor[i])
                cont++;
            mPar[i][1]=cont;
        }
    }
    for (i = 0; i<contImpar; i++){
        mImpar[i][0]=vImpar[i];
        cont=0;
        for (j=0; j<tam; j++){
            if(vImpar[i]==vetor[i])
                cont++;
            mImpar[i][1]=cont;
        }
    }
    return 0;
}
void printVetor(int vetor[], int tam){
    int i;
    for (i = 0; i < tam; i++)
        printf("%d\t", vetor[i]);
}
