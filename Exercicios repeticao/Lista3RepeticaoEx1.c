/*1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende
essa condição. Esse número representa a quantidade de números primos a serem mostrados.
Exemplo:
Informe a quantidade de numeros primos que serao mostrados: 15
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
Desejar digitar outro numero (S/s): n */
#include <stdio.h>
int main(void)
{
    char opcao;
    int quantidade, i, j, divisores, contPrimos; 
    do
    {
        do
        {
            printf("Informe a quantidade de numeros primos que serao mostrados:\n");
            scanf("%d", &quantidade);
            if (quantidade<0)
                printf("Valor invalido\n");
        }while (quantidade<=0);
        contPrimos=0;
        i=2;
        do
        {
            for (j=1;j<=i;j++)
            {
                if (i%j==0)
                    divisores++;
            }
            if (divisores==2)
            {
                printf("%d\n", i);
                contPrimos++;
            }
        } while (contPrimos < quantidade);
        printf("Deseja repetir o progama? (S/s)");
        fflush(stdin);
        scanf("%c, &opcao");
    } while (opcao == 's' && opcao == 'S');
}