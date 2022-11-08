/*Fazer uma função para verificar se um numero e ou nao primo. A função será implementada em um
arquivo de cabecalho "primo.h" e deverá retornar 0 se o número for primo ou 1, caso o número não seja
primo. Elaborar um programa para usar essa função para:
a) Verificar se um numero informado pelo usuário é ou não um número primo. Validar a entrada para que o
usuario informe um numero positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a média dos primos entre 200 e 100.
Exemplo de entrada e saida:
A - Verificar se um numero eh primo
B - Primos entre 1 e 100
C - Media dos primos entre 200 e 100
Opcao: a

Infome um numero 10
10 nao eh primo

Executar novamente (S ou N): s
b 2 3 5 7 11 13 ... 97
c 150.81
*/
#include <stdio.h>
#include <ctype.h>
#include "primos.h"
int main(void){
    int num, i;
    char opcao, abc;
    printf("A - Verificar se um numero eh primo\nB - Primos entre 1 e 100\nC - Media dos primos entre 200 e 100");
    scanf("%c", abc);
    toupper(abc);
    switch (abc)
    {
    case 'A':
        printf("Informe um numero\n");
        scanf("%d", &num);
        if (primo(num)==0)
        {
            printf("O numero %d eh primo\n", num);
        }
        else
        {
            printf("O numero %d nao eh primo\n", num);
        }
        break;
    case 'B':
        if (primo(num)==0)
        {
            for (i = 1; i <= 100; i++)
            {
                printf("%d\t", num);
            }
        }
        break;
    case 'C':

        break:
    default:
        printf("Caractere Invalido");
        break;
    }
    return 0;
}