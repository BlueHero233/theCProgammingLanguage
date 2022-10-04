#include <stdio.h>
//Escreva um algoritmo que leia o valor de uma prestação
//e da taxa de juros cobrada pelo atraso da
//prestação. Calcule o valor a ser pago por meio da fórmula:
//Valor com juros = Prestação + (Prestação * Taxa /100)
int main (void)
{
    int prestacao, juros, valor;
    printf("Informe o valor da prestacao: \n");
    scanf("%d", &prestacao);
    printf("Informe os juros em decimais: \n");
    scanf("%d", &juros);
    valor=prestacao+(prestacao*juros/100);
    printf("O valor com juros eh %d", valor);
    return 0;
}
