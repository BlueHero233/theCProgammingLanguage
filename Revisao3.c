/*) Gerar um vetor que não contenha números repetidos, com 10 elementos aleatórios entre 0 e 50. Utilizar
uma função para verificar se cada elemento do vetor é ou não um número primo. Essa função retorna 0 para
indicar que o número é primo ou 1 para indicar que o número não é primo. Criar uma matriz 10x3 onde a
primeira coluna vai armazenar o índice do vetor, a segunda coluna vai armazenar o elemento do vetor e a
terceira coluna vai armazenar 0 se o elemento do vetor for um número primo ou 1 caso o elemento do vetor
não seja um número primo. Fazer a média dos números primos encontrados no vetor. A saída do programa
deve ser apresentada como no exemplo a seguir:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10
#define m 3
int primo(int a);
int main(void){
    int i, j, k, l, vetor[10], matriz[n][m];
    srand(time(NULL));
    for(i=0;i<10;i++){
        vetor[i]=rand()%(50+1);
        for(j=0;j<i;j++){
            if(vetor[i]==vetor[j]){
                i--;
                break;
            }
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d\t", vetor[i]);
    putchar('\n');
    for (k = 0; k < n; k++){
        matriz[k][0]=k;
        matriz[k][1]=vetor[k];
        matriz[k][2]=primo(vetor[k]);
    }
    putchar('\n');
    printf("INDICE ELEMENTO PRIMO\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
            printf("%d\t", matriz[i][j]);
        putchar('\n');
    }
    return 0;
}
int primo(int a){
    int i, divisores=0;
    for (i=2;i<a;i++){
        if (a%i==0){
            divisores++;
            break;
        }
    }
    return divisores;
}