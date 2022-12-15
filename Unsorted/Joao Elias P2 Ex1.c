/*Ex 1 - Gerar valores randomicos em uma faixa de valores (limite inferior e superior) em um vetor
mostrar os elementos de um vetor
ordernar um vetor
gerar valores randomicos em uma faixa de valores (limite inferior e superior) em uma matriz
mostrar os elementos de uma matriz
verificar se um valor existe na matriz

Usando as funcoes fazer um progama que
gere valores randomicos entre 97 e 122 para um vetor com 10 elementos
orderne o vetor
mostre o vetor ordenado
gere valores randomicos entre 97 e 122 para uma matriz com 4 linhas e 3 colunas
copie para um novo vetor os elementos sem repetir que estao contidos na matriz e mostre o novo vetor
copie os elementos do novo vetor para uma string
imprima a string*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void gerarVetorComFaixa(int vetor[],int tam,int inf,int sup);
void mostarVetor(int vetor[],int tam);
void ordenarVetor(int vetor[],int tam);
void gerarMatrizComFaixa(int n,int m,int matriz[n][m],int inf,int sup);
void mostrarMatriz(int n,int m,int matriz[n][m]);
void ocorreNaMatriz(int n,int m,int matriz[n][m],int vetor[],int tam);
int main(void){
    char string[10];
    int vetor[10],matriz[4][3], i, j;
    gerarVetorComFaixa(vetor,10,97,122);
    ordenarVetor(vetor,10);
    printf("==== VETOR ORDENADO ====\n");
    mostarVetor(vetor,10);
    printf("\n\n");
    gerarMatrizComFaixa(4,3,matriz,97,122);
    printf("==== MATRIZ ====\n");
    mostrarMatriz(4,3,matriz);
    printf("\n");
    printf("==== ELEMENTOS DO VETOR QUE EXISTEM NA MATRIZ ====\n");
    ocorreNaMatriz(4,3,matriz,vetor,10);
    printf("\n\n");
    for(i=0;i<10;i++){
        string[i]=vetor[i];
    }
    printf("==== STRING ====\n");
    puts(string);
    return 0;
}
void gerarVetorComFaixa(int vetor[],int tam,int inf,int sup){
    int i;
    srand(time(NULL));
    for(i=0;i<tam;i++){
        vetor[i]=rand()%((sup-inf)-1)+inf;
    }
}
void mostarVetor(int vetor[],int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("%d\t",vetor[i]);
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
void gerarMatrizComFaixa(int n,int m,int matriz[n][m],int inf,int sup){
    int i,j;
    srand(time(NULL));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            matriz[i][j]=rand()%((sup-inf)-1)+inf;
        }
    }
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
void ocorreNaMatriz(int n,int m,int matriz[n][m],int vetor[],int tam){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matriz[i][j]==vetor[j]){
                j--;
                break;
            }
        }
    }
    for(i=0;i<tam;i++){
        printf("%d\t",vetor[i]);
    }
}
