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
    int num,consecutivo,i,j;
    int soma=0,impar=1;
    do
    {
        printf("Informe um numero:\n");
        scanf("%d",&num);
        if(num<1)
        {
            printf("Numero Invalido!\n");
        }
    }while(num<1);
    for (i=1;i<=num;i++)
    {
        printf("%d => ",i);
        consecutivo=0;
        for (j=0;j<i;j++)
        {
            printf("%d",impar);
            consecutivo+=impar;
            soma+=impar;
            impar+=2;
        }
        printf("= %d\n", consecutivo);
    }
    printf("Soma total dos impares = %d\n",soma);
    return 0;
}
