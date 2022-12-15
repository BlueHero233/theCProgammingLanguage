/*Ler uma string e contar quantos espacos sucessivos ela contem, armarzenar esses valores em um vetor
mostrar o vetor, verificar se ha no vetor tres valores sequenciais que estao em ordem crescente
se houver mostrar. ordenar o vetor e mostralo construir uma matriz de n linhas e duas colunas
sendo que n representa a quantidade de elementos do vetor (se o elemento ocorrer mais de uma vez, considerar apenas uma ocorrencia)
na segunda coluna da matriz armazenar o fatorial do numero que esta na primeira coluna e mostrar a matriz.
*/#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void mostrarMatriz(int n,int m,int matriz[n][m]);
void ordenarVetor(int vetor[],int tam);
void mostarVetor(int vetor[],int tam);
int fatorial(int num);
int main(void){
    char string[100];
    int i=0,j=0,k=0,tam=0,vetor[50],matriz[20][2];
    gets(string);
    while(string[i]!='\0'){
        if(string[i]==' '){
            tam++;
        }
        else if(tam>0){
            vetor[j]=tam;
            j++;
            tam=0;
        }
        i++;
    }
    if(tam>0){
       vetor[j]=tam;
       j++;
    }
    printf("==== VETOR ====\n");
    mostarVetor(vetor,j);
    printf("\n\n==== SEQUENCIAS ====\n");
    for(i=0;i<j;i++){
        if(vetor[i]<vetor[i+1]&&vetor[i+1]<vetor[i+2]){
            printf("%d %d %d  ",vetor[i],vetor[i+1],vetor[i+2]);
        }
    }
    printf("\n\n==== VETOR ORDENADO ====\n");
    ordenarVetor(vetor,j);
    mostarVetor(vetor,j);
    printf("\n\n==== MATRIZ ====\n");
    for(i=0,k=0;i<j;i++){
        if(i==0 || vetor[i]!=vetor[i-1]){
            matriz[k][0]=vetor[i];
            matriz[k][1]=fatorial(vetor[i]);
            k++;
        }
    }
    printf("VALOR    FATORIAL\n");
    mostrarMatriz(j,2,matriz);
}
void mostrarMatriz(int n,int m,int matriz[n][m]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}
void ordenarVetor(int vetor[],int tam){
    int i,j,aux;
    for(i=tam-1;i>0;i--){
        for(j=0;j<i;j++){
            if(vetor[j]>vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
}
void mostarVetor(int vetor[],int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%d\t",vetor[i]);
    }
}
int fatorial(int num){
    int i,fat=1;
    for(i=num;i>=2;i--){
        fat=fat*i;
    }
    return(fat);
}