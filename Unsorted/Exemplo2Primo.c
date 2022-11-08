//Verifica se um n�mero � ou n�o um n�mero primo

#include <stdio.h>
int main(void)
{
    int num, cont=0, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    //num = 7
    //inicia em 2 e termina em 6 porque o numero sempre ser� divisivel por 1 or ele mesmo
    for(i=2; i<num; i++) // se no intervalo entre 2 e 6 tiver um divisor sai fora do for
    {
        if(num%i == 0)
        {
             cont++; // achou um divisor
             break; //sai do for
        }
    }

    if(cont == 0 && num > 1) //se n�o tem nenhum divisor entre 2 e 6 e o numero for maior do que 1
    {
        printf("Eh um numero primo\n");
    }
    else
    {
        printf("Nao eh um numero primo\n");
    }

    return 0;
 }
