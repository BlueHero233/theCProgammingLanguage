//algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo
//sal�rio, sabendo-se que este sofreu um aumento de 25%
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
