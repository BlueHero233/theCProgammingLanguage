//algoritmo que receba o valor de um depósito e o valor da taxa de juros,
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.
#include <stdio.h>
int main()
{
    float deposito, taxaJuros, rendimento, valorFinal;
    printf("Insira o valor do deposito\n");
    scanf("%f", &deposito);
    printf("Insira a taxa de juros (em decimal)\n");
    scanf("%f", &taxaJuros);
    valorFinal=(deposito+deposito*taxaJuros);
    rendimento=(valorFinal-deposito);
    printf("O rendimento e de %.2f\n", rendimento);
    printf("O valor total eh %.2f\n", valorFinal);
    return 0;
}
