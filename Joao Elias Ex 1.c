/*Escreva um progama que imprima os numeros de 1 ate o valor informado pelo usuario
(que deve ser validado para ser maior que 1). Para cada um desses numeros,
calcule e imprima os impares consecutivos e a soma deles.
tambem devera ser calculada e mostrada a soma total dos impares.
Informe um numero: 10
1 => 1 = 1
2 => 3 + 5 = 8
3 => 7 + 9 + 11 = 27
4 => 13 + 15 + 17 + 19 = 64
5 => ...
6 => ...
7 => ...
8 => ...
9 => ...
10 => ...

Soma total dos impares = 3025*/
#include <stdio.h>
int main(void)
{
    int num, impar, i, j, soma, total=0;
    do
    {
        printf("Informe um numero:\n");
        scanf("%d", &num);
        if(num<1)
        {
            printf("Numero Invalido!\n");
        }
    }while(num<1);
    //n=imparN
    //n+1=imparN+1
    //soma dos impares consecutivos = numero^3
    for (i = 1; i <= num; i++)
    {
        for ( j = 1; j <= (i*i)+i; j++)
        {
            if (i%2==0)
            {
                
            }
 
            printf("%d\t", j);

        }
        j=j+j;
        printf("\n");
    }
    printf("Soma total dos impares = %d", total);
    return 0;
}