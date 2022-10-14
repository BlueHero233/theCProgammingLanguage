#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main (void)
{
    int numero, limite_superior, limite_inferior, n, i, auxiliar;
    char opcao;
    do
    {
        printf("Informe o valor do limite inferior do intervalo: ");
        scanf("%d", &limite_inferior);
        printf("\nInforme o valor do limite superior do intervalo: ");
        scanf("%d", &limite_superior);
        printf("\nInforme quantos numeros deseja imprimir por linha: ");
        scanf("%d", &n);
        auxiliar = n;
        if(n>0&&limite_inferior>1&&limite_superior>=limite_inferior)
        {
            for(numero=limite_inferior;numero<=limite_superior;numero++)
            {
                int contador1=0;
                for(i=1;i<=limite_superior;i++)
                {
                    if(numero%i==0)
                        contador1++;
                }
                if(contador1==2)
                {
                    if(n >0)
                    {
                        printf("%10.d", numero);
                        n--;
                    }

                    else
                    {
                        printf("\n");
                        printf("%10.d", numero);
                        n = (auxiliar -1);
                    }
                }
            }
        }
        if (n <= -1)
            printf("\nNumero de linhas informado menor ou igual a zero.");
        if(limite_inferior < 1)
            printf("\nLimite inferior informado menor que 1.");
        if(limite_superior < limite_inferior)
            printf("\nLimite superior informado menor que o limite inferior.");
        printf("\n\nDeseja repetir o programa? \n<S/s ou N/n>\n");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
        opcao = toupper(opcao);
    }
    while(opcao == 'S');
    system ("pause");
    return 0;
}