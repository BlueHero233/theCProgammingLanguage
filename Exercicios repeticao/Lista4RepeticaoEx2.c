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
    int x, i, j, k, primos=0,count=0;
    do{
        printf("Digite um valor positivo para o limite inferior do intervalo:\n");
        do{
            scanf("%d", &x);
            if(x<1)
            {
                printf("Valor invalido\n");
            }
        }while(x<1);
        for (i=x;i<=x+10;i++){
            printf("%d ==> ", i);
            primos=0;
            for(j=2;j<=i;j++)
            {
                count=0;
                for(k=2;k<=j/2;k++)
                {
                    if(j%k==0)
                        count++;
                }
                if(count==0){
                    primos++;
                    printf("%d ",j);
                }
            }
            printf("==> %d primos(s)\n", primos);
        }
        printf("Deseja repetir o progama? (S/s)");
        fflush(stdin);
        scanf("%c", &opcao);
    } while (opcao == 's' || opcao == 'S');
    return 0;
}