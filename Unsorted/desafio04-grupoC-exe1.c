/*Crie uma funcao para verificar se um numero x, informado pelo usuario,
equivale a soma dos n primeiros numeros impares iniciando em 1.
Por exemplo: 9 e um numero que tem essa caracterıstica porque 1 + 3 + 5 = 9 (soma dos n
primeiros numeros ımpares iniciando em 1).
A funcao recebe como parametro um valor inteiro x e retorna ’s’ se o n ́umero equivale a soma dos n
primeiros  ́ımpares ou ’n’ caso contr ́ario.
A fun ̧c ̃ao tamb ́em deve interromper a impress ̃ao dos n ́umeros  ́ımpares quando a soma dos ımpares for
maior ou igual a x.
Fazer um programa que use essa funcao para:
1. Ler um numero inteiro maior do que 0, informado pelo usuario e verificar se o mesmo tem essa
caracterıstica.
2. Ler um intervalo, informado pelo usuario. Mostrar na tela todos os numeros que tem a carac-
terıstica e os que nao tem a caracterıstica, conforme exemplos abaixo.
O programa deve conter:
• Um menu com as duas opcoes, conforme descrito acima e o exemplo abaixo. Essas opcoes devem
ser validadas, ou seja, so pode aceitar 1 e 2.
• Na opcao 1, a entrada deve ser validada para aceitar somente valores maiores do que 0.
• Na opcao 2, a validacao deve garantir que o limite inferior seja menor do que o limite superior.
• Permitir a repeticao do programa ate que o usuario resolva encerra-lo.
• A cada execucao, limpar a tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char soma(int n){
    int i,somatoria=0;
    for(i=1;somatoria<n;i+=2)
        somatoria += i;
    if(somatoria == n)
        return 's';
    else if (somatoria != n)
        return 'n';
    return 'e';
}
void Soma(int n){
    int i, somatoria=0;
    printf("%d = ",n);
    for(i = 1; somatoria < n; i+=2){
        somatoria+=i;
        printf("%d ",i);
    }
}
int main (void){
    int n,i,j,somatoria,inf,sup,opcao;
    char novamente, retorno;
        printf("1 - Verifica se um numero equivale a soma dos impares\n");
        printf("2 - Verifica os numeros que equivalem a soma dos impares de um intervalo\n");
        do{
        printf("Opcao: ");
        scanf(" %d",&opcao);
        if(opcao!=1&&opcao!=2)
            printf("Opcao invalida!!! Escolha opcao 1 ou 2\n");
        }while(opcao!=1&&opcao!=2);
        somatoria = 0;
        do{
        switch(opcao){
            case 1:
                do{
                    printf("Informe um numero: \n");
                    scanf("%d",&n);     //erro aqui
                    if(n<0);
                        printf("O numero deve ser maior do que 0!");
                    }while(n<0);
                retorno = soma(n);
                if(retorno == 's'){
                    Soma(n);
                    printf("=> Equivale a soma dos impares\n");
                }
                else if (retorno == 'n'){
                    Soma(n);
                    printf("=> Nao equivale a soma dos impares\n");
                }
                break;
            case 2:
                do{
                    printf("Informe o valor do limite inferior de um intervalo: ");
                    scanf("%d",&inf);
                    if(n<0);
                        printf("O limite inferior deve ser maior do que 0!\n");
                    }while(n<0);
                do{
                    printf("Informe o valor do limite superior de um intervalo: \n");
                    scanf("%d",&sup);
                    if(sup<inf)
                        printf("O limite superior deve ser maior do que o limite inferior!\n");
                    }while(sup<inf);
                for(i=inf; i<= sup; i++){
                    printf("%d = ", i);
                    somatoria = 0;
                    for(j=1; somatoria < i; j+=2){
                        somatoria += j;
                        printf("%d ",j);
                    }
                    retorno = soma(i);
                    if(retorno == 's')
                        printf("=> Equivale a soma dos impares\n");
                    else if (retorno == 'n')
                        printf("=> Nao equivale a soma dos impares\n");
                }
                break;
            default:
        }
        printf("Deseja repetir o programa (S ou N)?\n");
        scanf(" %c",&novamente);
        system("clear");
    }while(toupper(novamente) == 'S');
    return 0;
}
