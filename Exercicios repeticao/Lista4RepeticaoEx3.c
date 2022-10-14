/*  Faça um programa que solicite valores positivos para o limite inferior e superior de um intervalo e mostre os
números primos do intervalo em ordem crescente e faça a soma dos dígitos de cada número primo.
Exemplo 
Digite um valor positivo para o limite inferior do intervalo: 100
Digite um valor positivo para o limite superior do intervalo: 150
Primo 101 => Soma dos digitos = 2
Primo 103 => Soma dos digitos = 4
Primo 107 => Soma dos digitos = 8
Primo 109 => Soma dos digitos = 10
Primo 113 => Soma dos digitos = 5
Primo 127 => Soma dos digitos = 10
Primo 131 => Soma dos digitos = 5
Primo 137 => Soma dos digitos = 11
Primo 139 => Soma dos digitos = 13
Primo 149 => Soma dos digitos = 14

deseja repetir o progama (S/s)?
*/
#include <stdio.h>
int main(void)
{
    char opcao;
    int limInferior, limSuperior, count, i, j, soma, digitoUm, digitoDois, digitoTres, aux;
    do
    {   
        printf("Digite um valor positivo para o limite inferior do intervalo:\n");
        scanf("%d", &limInferior);
        printf("Digite um valor positivo para o limite superior do intervalo:\n");
        scanf("%d", &limSuperior);
        for (i=limInferior;i<=limSuperior;i++)
        {   
            count=0;
            for (j=2;j<=i/2;j++)
            {
                if(i%j==0)
                    count++;
            }
            if (count==0)
            {
                digitoUm = i % 10;
                aux = i / 10;
                digitoDois = aux % 10;
                digitoTres = aux / 10;
                soma = digitoUm + digitoDois + digitoTres;
                printf("Primo %d => Soma dos digitos = %d\n", i, soma);
            }
        }
        printf("Deseja repetir o progama? (S/s)");
        fflush(stdin);
        scanf("%c", &opcao);
    } while (opcao == 's' && opcao == 'S');
    return 0;
}