//algoritmo que receba o salário-base de um funcionário, calcule e mostre o
//seu salário a receber, sabendo-se que esse funcionário tem gratificação de R$ 50,00
//e paga imposto de 10% sobre o salário-base.
#include <stdio.h>
int main()
{
    float salBase, salFinal;
    printf("Insira o salario antigo\n");
    scanf("%f", &salBase);
    salFinal=(salBase+50-salBase*0.10);
    printf("O salario atualizado vale %.2f\n", salFinal);
    return 0;
}
