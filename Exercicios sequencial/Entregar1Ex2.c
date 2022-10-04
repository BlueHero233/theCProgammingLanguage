/* Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas variáveis em tipo float) */
#include <stdio.h>
int main()
{
    int tempoSegundos;
    float dias, horas, minutos;
    printf("Insira o tempo em segundos\n");
    scanf("%d", &tempoSegundos);
    dias=(tempoSegundos/86400);
    horas=(tempoSegundos/3600);
    minutos=(tempoSegundos/60);
    printf("O tempo em minutos eh: %f \n",minutos);
    printf("O tempo em horas eh: %f \n",horas);
    printf("O tempo em dias eh: %f \n",dias);
    return 0;
}
