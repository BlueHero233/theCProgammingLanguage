//algoritmo que receba o sal�rio-base de um funcion�rio, calcule e mostre o
//seu sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de R$ 50,00
//e paga imposto de 10% sobre o sal�rio-base.
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
