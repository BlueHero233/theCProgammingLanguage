/*Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9, é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares e 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário.*/

#include <stdio.h>
int main(void){
    int opcao, num, limInf, limSup;
    printf("1 - Verifica se um numero equivale a soma dos impares\n");
    printf("2 - Verifica se os numeros que equivalem a soma dos impares de um intervalo\n");
    printf("Opcao:\n");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        printf("Informe um numero\n");
        scanf("%d", &num);
        break;
    case 2:
        printf("Informe o valor do limite inferior de um intervalo\n");
        scanf("%d", &limInf);
        printf("Informe o valor do limite inferior de um intervalo\n");
        scanf("%d", &limSup);
        break;
    default:
        break;
    }
    return 0;
}