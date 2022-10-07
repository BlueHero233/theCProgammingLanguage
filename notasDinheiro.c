#include <stdio.h>

int main()
{
    int val, cem, cinq, deze, dez, cin, um;
    printf("Insira o valor em reais: R$ \n");
    scanf("%d", &val);
    cem=val/100;
    cinq=((val%100)/50);
    dez=((val%100)%50)/10;
    cin=(((val%100)%50)%10)/5;
    um=((((val%100)%50)%10)%5)/1;
    printf("%d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1\n", cem, cinq, dez, cin, um);
    return 0;
}
