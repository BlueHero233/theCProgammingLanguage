//algoritmo que receba o salário de um funcionário, calcule e mostre o novo
//salário, sabendo-se que este sofreu um aumento de 25%
#include <stdio.h>
int main()
{
    float salInicial, salFinal;
    printf("Informe o salario antigo\n");
    scanf("%f", &salInicial);
    salFinal=(salInicial+salInicial*0.25);
    printf("O salario novo eh %.2f\n", salFinal);
    return 0;
}
