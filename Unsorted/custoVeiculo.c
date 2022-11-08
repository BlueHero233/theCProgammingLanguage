/*O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de f�brica). Escrever um programa para, a
partir do custo de f�brica do carro, calcular e mostrar o custo ao consumidor.*/
#include <stdio.h>
int main(void)
{
    int custoFabrica, custoFinal;
    float imposto, distribuidor;
    printf("Informe o custo de fabrica de um automovel: \n");
    scanf("%d", &custoFabrica);
    printf("Informe a percentagem do distribuidor em decimal: \n");
    scanf("%f", &distribuidor);
    printf("Informe a percentagem do imposto em decimal: \n");
    scanf("%f", &imposto);
    custoFinal=custoFabrica+custoFabrica*distribuidor/100+custoFabrica*imposto/100;
    printf("O custo do veiculo ao consumidor eh: %d\n", custoFinal);
    return 0;
}
