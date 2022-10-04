/*Um viajante de carro fara o trajeto entre duas cidades e ao termino da viagem deseja saber:
a) Quantas vezes foi necessario abastecer o carro. (Use a funcao ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a distancia indicada.
c) Quantos litros restaram no tanque apos a chegada ao destino.
Faca um programa que leia a distancia entre as duas cidades, a capacidade do tanque e o consumo medio
do veiculo, calcule e mostre as informacoes solicitadas.*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int distancia, capacidade, abastecer;
    float consumoMedio, resto, total;
    printf("Informe a distancia (em km) percorrida entre as cidades: \n");
    scanf("%d", &distancia);
    printf("Informe a capacidade maxima do tanque de combustivel: \n");
    scanf("%d", &capacidade);
    printf("Informe o consumo medio (em km por litro) do veiculo: \n");
    scanf("%f", &consumoMedio);
    //distancia=consumoMedio*capacidade
    //440 48 8 -> 55.0 2 41.0
    abastecer=ceil(distancia/(capacidade*consumoMedio));
    total=distancia/consumoMedio;
    resto=capacidade*abastecer-distancia/consumoMedio;
    printf("\nFoi consumido %.1f litros para percorrer a distancia indicada\n",total);
    printf("\nfoi necessario abastecer %d vezes o carro durante o trajeto\n",abastecer);
    printf("\nRestaram %.1f litros apos a chegada ao destino\n",resto);
    return 0;
}