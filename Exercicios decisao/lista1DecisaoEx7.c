/* Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual Alíquota*
Até R$ 10.000,00 0%
> R$ 10.000,00 e <= R$ 25.000,00 10%
Acima de R$ 25.000,00 25%
*Alíquota é o percentual para realizar o cálculo do imposto de renda a ser pago.
Se informado valor negativo, não realizar o cálculo e informar o usuário. */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int renda;
    float ir;
    printf("Informe a renda anual\n");
    scanf("%d", &renda);
    if (renda<0)
    {
        printf("Renda negativa\n");
        exit(1);
    }
    else
    {    
    if (renda<=10000)
        ir=1;
    else if (renda>10000&&renda<=25000)
        ir=0.1;
    else if (renda>25000)
        ir=0.25;
    ir=(ir*renda);
    printf("O valor do imposto de renda é %.2f", ir);
    }
    return 0;
}