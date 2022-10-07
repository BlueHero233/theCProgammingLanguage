/*3) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.*/
#include <stdio.h>
int main(void)
{    
int i, limInicial, limFinal, incremento, media=1, cont=0, soma=0;
    printf("Informe o limite inicial, final e o incremento\n");
    scanf("%d%d%d", &limInicial, &limFinal, &incremento);
    for (i=limInicial; i <=limFinal; i=i+incremento)
    {
        printf("%d\n", i);
        if (i%35==0&&i%2!=0)
        {
            soma=soma+i;
            cont++;
        }
    }
    media=soma/cont;
    printf("A media dos numeros impares que sao divisiveis por 35 eh %d\n", media);
}