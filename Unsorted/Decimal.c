
/* Mostra a impressão formatada com o printf() */
#include <stdio.h>

int main(void)
{
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    //%02d - formata com preenchimento 0 e tamanho 2
    // => o número 2 será representado por 02
    // => o número 12 será representado por 12, pois já possui tamanho 2
    //%2d - formata com largura 2
    printf("\A data que voce digitou foi: %2d/%02d/%04d\n", dia, mes, ano);

    return 0;
}
