#include <stdio.h>

int main()
{
    int valor, cem, cinquenta, dez, cinco, um;
    printf("Insira o valor em reais: R$ \n");
    scanf("%d", &valor);
    cem=valor/100;
    cinquenta=((valor%100)/50);
    dez=((valor%100)%50)/10;
    cinco=(((valor%100)%50)%10)/5;
    um=((((valor%100)%50)%10)%5)/1;
    printf("%d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1\n", cem, cinquenta, dez, cinco, um);
    return 0;
}
