/*1) Fazer uma fun��o para verificar se um n�mero equivale a soma dos n primeiros �mpares iniciando em 1.
Por exemplo, 9, � um n�mero que tem essa caracter�stica porque 1 + 3 + 5 = 9 (soma dos n primeiros
n�meros �mpares iniciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se o
n�mero equivale a soma dos n primeiros �mpares e 'n' caso n�o.
Fazer um programa que use essa fun��o para:
a) Ler um n�mero inteiro informado pelo usu�rio � verificar se o mesmo tem essa caracter�stica.
b) Mostrar todos os n�meros que t�m ou n�o t�m essa caracter�stica e pertencem a um intervalo informado
pelo usu�rio.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char soma(int n){

    int i,somatoria=0;

    for(i=1;somatoria<n;i+=2)
    {
        somatoria += i;
    }

    if(somatoria == n)
    {
        return 's';
    }
    else if (somatoria != n)
    {
        return 'n';
    }

    return 'e';


}
int main (void){
    int n,i,j,somatoria,inf,sup,opcao;
    char novamente, retorno;

    do
    {
        printf("1 - Verifica se um numero equivale a soma dos impares\n");
        printf("2 - Verifica os numeros que equivalem a soma dos impares de um intervalo\n");
        printf("Opcao: ");

        scanf(" %d",&opcao);

        somatoria = 0;

        switch(opcao)
        {
            case 1:

                printf("\nInforme um numero: ");

                scanf("%d",&n);

                printf("\n");

                retorno = soma(n);

                if(retorno == 's')
                {
                    printf("%d = ",n);

                    for(i = 1; somatoria < n; i+=2)
                    {
                        somatoria+=i;

                        printf("%d ",i);
                    }

                    printf("=> Equivale a soma dos impares\n");

                }
                else if (retorno == 'n')
                {
                    printf("%d = ",n);

                    for(i = 1; somatoria < n; i+=2)
                    {
                        somatoria+=i;

                        printf("%d ",i);
                    }

                    printf("=> Nao equivale a soma dos impares\n");
                }

                break;

            case 2:

                printf("\nInforme o valor do limite inferior de um intervalo: ");
                scanf("%d",&inf);

                printf("Informe o valor do limite superior de um intervalo: ");
                scanf("%d",&sup);

                printf("\n");

                for(i=inf; i<= sup; i++)
                {

                    printf("%d = ", i);

                    somatoria = 0;

                    for(j=1; somatoria < i; j+=2)
                    {
                        somatoria += j;

                        printf("%d ",j);
                    }

                    retorno = soma(i);

                    if(retorno == 's')
                    {
                        printf("=> Equivale a soma dos impares\n");
                    }
                    else if (retorno == 'n')
                    {
                        printf("=> Nao equivale a soma dos impares\n");
                    }

                }

                break;

            default:

                printf("Opcao invalida\n");
        }

        printf("\nDeseja repetir o programa (S ou N)?");
        //fflush(stdin);
        scanf(" %c",&novamente);

        printf("\n");

    }while(toupper(novamente) == 'S');

    return 0;
}
