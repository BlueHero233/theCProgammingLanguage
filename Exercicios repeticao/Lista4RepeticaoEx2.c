/* Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo 
exemplo:
10 ==> 2 3 5 7 ==> 4 primos(s)
11 ==> 2 3 5 7 11 ==> 5 primos(s)
12 ==> 2 3 5 7 11 ==> 5 primos(s)
13 ==> 2 3 5 7 11 13 ==> 6 primos(s)
14 ==> 2 3 5 7 11 13 ==> 6 primos(s)
15 ==> 2 3 5 7 11 13 ==> 6 primos(s)
16 ==> 2 3 5 7 11 13 ==> 6 primos(s)
17 ==> 2 3 5 7 11 13 17 ==> 7 primos(s)
18 ==> 2 3 5 7 11 13 17 ==> 7 primos(s)
19 ==> 2 3 5 7 11 13 17 19 ==> 8 primos(s)
20 ==> 2 3 5 7 11 13 17 19 ==> 8 primos(s)
Deseja continuar com o progama(S/s)?
*/
#include <stdio.h>
int main(void)
{
    char opcao;
    int x, count, i, j, primos=0;
    do
    {
        printf("Digite um valor positivo para o limite inferior do intervalo:\n");
        scanf("%d", &x);
        if (x<1)
        {
            printf("Valor invalido\n");
        }
        for (i=x;i<=x+10;i++)
        {   
            printf("%d ==> ", i);
            count=0;
            for (j=2;j<=i/2;j++)
            {
                if(i%j==0)
                    count++;
            }
            if (count==0)
            {
                primos++;
                printf("%d ", j);
                //20 ==> 2 3 5 7 11 13 17 19 ==> 8 primos(s)
            }
            printf(" ==> %d\n", primos);
        }
        
        printf("Deseja repetir o progama? (S/s)");
        fflush(stdin);
        scanf("%c, &opcao");
    } while (opcao == 's' && opcao == 'S');
    return 0;
}