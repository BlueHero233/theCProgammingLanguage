//algoritmo que receba o salário de um funcionário e o percentual de
//aumento, calcule e mostre o valor do aumento e o novo salário.
#include <stdio.h>
int main()
{
    float salInicial, percAumento, valorAumento, salFinal;
    printf("Informe o salario antigo\n");
    scanf("%f", &salInicial);
    printf("Informe a taxa de aumento (em decimal)\n");
    scanf("%f", &percAumento);
    salFinal=(salInicial+salInicial*percAumento);
    valorAumento=(salFinal-salInicial);
    printf("O salario novo eh %.2f\n", salFinal);
    printf("O aumento foi de %.2f\n", valorAumento);
    return 0;
}
