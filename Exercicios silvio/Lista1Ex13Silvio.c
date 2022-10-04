//Dado um número inteiro que representa uma quantidade de segundos, determinar o
//seu valor equivalente em horas, minutos e segundos. Se a quantidade de segundos
//for insuficiente para dar um valor em horas, o valor em horas deve ser 0 (zero). A
//mesma observação vale em relação aos minutos e segundos. Por exemplo: 3.600
//segundos =1 hora, 0 minutos, 0 segundos. ; 3.500 segundos = 0 horas, 58 minutos e
//20 segundos.
#include <stdio.h>
int main()
{
    int tempoSegundos, horas, minutos, segundos, segundosEmHora = 60*60, segundosEmMinuto = 60, segundosDeSobra;
    printf("Insira o tempo em segundos\n");
    scanf("%d", &tempoSegundos);
    horas=(tempoSegundos/segundosEmHora);
    segundosDeSobra=tempoSegundos-(horas*segundosEmHora);
    minutos=(segundosDeSobra/segundosEmMinuto);
    segundosDeSobra=segundosDeSobra-(minutos*segundosEmMinuto);
    segundos=segundosDeSobra;
    printf("%d horas, %d minutos e %d segundos\n", horas,minutos,segundos);
    return 0;
}
