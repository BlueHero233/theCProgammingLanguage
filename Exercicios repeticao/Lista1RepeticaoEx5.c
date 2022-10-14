/* Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada.
Exemplo: 
Quantos numeros impares quer mostrar: 5
1
3
5
7
9*/
#include <stdio.h>
int main(void)
{
    int num, i;
    printf("Quantos numeros impares quer mostrar:\n");
    scanf("%d", &num);
    if (num<=0)
        printf("Entrada Invalida\n"); 
    for (i=1; i<=num; i++)
    {
        if (i%2!=0)
            printf("%d\n", i);
    }
    return 0;
}