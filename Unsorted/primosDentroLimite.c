#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int numero, limite_superior, limite_inferior, n, i, auxiliar;
    char opcao;
    do
    {
        printf("Informe o valor do limite inferior do intervalo: \n");
        scanf("%d", &limite_inferior);
        printf("Informe o valor do limite superior do intervalo: \n");
        scanf("%d", &limite_superior);
        printf("Informe quantos numeros deseja imprimir por linha: \n");
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
                    if(n>0)
                    {
                        printf("%d", numero);
                        n--;
                    }
                    else
                    {
                        printf("\n");
                        printf("%d", numero);
                        n=(auxiliar--);
                    }
                }
            }
        }
        if (n<=-1)
            printf("Numero de linhas informado menor ou igual a zero.\n");
        if(limite_inferior < 1)
            printf("Limite inferior informado menor que 1.\n");
        if(limite_superior < limite_inferior)
            printf("Limite superior informado menor que o limite inferior.\n");
        printf("Deseja repetir o programa? <S/s>\n");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);
        opcao = toupper(opcao);
    }
    while(opcao=='S');
    system ("pause");
    return 0;
}