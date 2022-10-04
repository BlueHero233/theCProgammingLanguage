/*Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo e ainda obter um lucro
de 25%.
Obs.: A fun��o ceil() da biblioteca math.h arredonda o n�mero para cima.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int custoEspetaculo, ingressos, ingressosMin;
    float custoIngresso;
    printf("Informe o valor de custo do espetaculo: \n");
    scanf("%d", &custoEspetaculo);
    printf("Informe o valor do convite: \n");
    scanf("%f", &custoIngresso);
    ingressos=ceil(custoEspetaculo/custoIngresso);
    ingressosMin=ceil((custoEspetaculo*1.25)/custoIngresso);
    printf("Para cobrir o custo do espetaculo eh necessario vender %d ingressos \n", ingressos);
    printf("Para cobrir o custo do espetaculo e ter lucro de 25%% eh necessario vender %d ingressos \n", ingressosMin);
    return 0;
}
