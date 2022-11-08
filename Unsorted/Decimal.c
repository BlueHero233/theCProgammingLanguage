
/* Mostra a impress�o formatada com o printf() */
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
    // => o n�mero 2 ser� representado por 02
    // => o n�mero 12 ser� representado por 12, pois j� possui tamanho 2
    //%2d - formata com largura 2
    printf("\A data que voce digitou foi: %2d/%02d/%04d\n", dia, mes, ano);

    return 0;
}
