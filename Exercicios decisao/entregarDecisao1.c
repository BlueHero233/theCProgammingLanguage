/* A contribuição para o INSS é calculada da seguinte forma:
a) Para o salário bruto de até três salários mínimos, o desconto do INSS será de 8%.
b) Para o salário bruto acima de três salários mínimos, o desconto do INSS será de 10%. Para as
contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o
INSS e o salário líquido restante e informe-os.
Exemplo 1 para a condição do else:
- salário mínimo 1000
- salário bruto 11000
- Condição: se salário bruto é maior do que três salários mínimos, então o cálculo considerado para o INSS é de 10%
- INSS = 11000 * 10%= 1100
- Condição: se valor do INSS é maior que o valor do salário mínimo, então o valor do INSS deve receber o valor do
salário mínimo que é 1000
- Valor do salário líquido = 11000 - 1000= 10000
Exemplo 2 para a condição do else:
- salário mínimo 1000
- salário bruto 4000
- Condição: se salário bruto é maior do que três salários mínimos, então o cálculo considerado para o INSS é de 10%
- INSS = 4000 * 10%= 400
- Valor do INSS é menor que o valor do salário mínimo (condição falsa para o teste if(inss > salMinino), calcular o valor
do salário líquido e imprimir
- Valor do salário líquido = 4000 - 400 = 3600*/
#include <stdio.h>
int main(void)
{
    int salarioBruto, salarioLiquido, salarioMin;
    float inss;
    printf("Informe o valor do salario minimo\n");
    scanf("%d", &salarioMin);
    printf("Informe o valor do salario bruto\n");
    scanf("%d", &salarioBruto);
    if(salarioBruto>=3*salarioMin)
        {
        inss=0.1;
        inss=salarioBruto*inss;
        if(inss>salarioMin)
        {
            inss=salarioMin;
            salarioLiquido=salarioBruto-inss;
            printf("O valor do salario liquido eh %d\n", salarioLiquido);
        }
        else
        {
            salarioLiquido=salarioBruto-inss;
            printf("O valor do salario liquido eh %d\n", salarioLiquido);
        }
        }
    else if(salarioBruto<3*salarioMin)
            {
            inss=0.08;
            inss=salarioBruto*inss;
            if(inss>salarioMin)
            {
                inss=salarioMin;
                salarioLiquido=salarioBruto-inss;
                printf("O valor do salario liquido eh %d\n", salarioLiquido);
            }
            else
            {
                salarioLiquido=salarioBruto-inss;
                printf("O valor do salario liquido eh %d\n", salarioLiquido);
            }
        }
    return 0;
}