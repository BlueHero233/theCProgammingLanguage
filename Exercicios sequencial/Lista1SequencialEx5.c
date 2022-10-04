#include <stdio.h>
/*Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS*/
int main (void)
{
    int salBruto;
    float inss, ir, salLiquid;
    printf("Informe o salario bruto: \n");
    scanf("%d", &salBruto);
    printf("Informe o INSS em decimal: \n");
    scanf("%f", &inss);
    printf("Informe o Imposto de Renda em decimal: \n");
    scanf("%f", &ir);
    salLiquid=(salBruto-(salBruto*inss/100)-(salBruto*ir/100));
    printf("O salario ajustado eh %.2f", salLiquid);
    return 0;
}
