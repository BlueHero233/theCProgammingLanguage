#include <stdio.h>
#include <ctype.h>
int main()
{
    int valor=0, digito=0, d_conta=0, d_quero=0;
    char opcao;
    do
    {
        printf("Insira um numero:\n");
        scanf("%d", &valor);
        if (valor<0)
        {
            printf("%d eh invalido, o numero deve ser positivo\n", valor);
            continue;
        }
        printf("Insira um digito:\n");
        scanf("%d", &digito);
        if (digito<0)
        {
            printf("%d eh invalido, o digito deve ser positivo\n", digito);
            continue;
        }

    if (!valor)
    {
        d_conta=1;
        if (digit==0) d_conta=1;
    }
        while (valor)
        {
            int sobra=valor%10;
            if (sobra==digit) ++d_quero;
            ++d_conta;
            valor/=10;
        }
        const char* d_extenso[]={"zero", "um", "dois", "tres", "quatro",
                                "cinco", "seis", "sete", "oito", "nove"};
        printf("O numero tem %d digitos, %d dos quais sao %s\n",
               d_conta, d_quero, d_extenso[digito]);
        printf("Deseja continuar? (s/S)");
        scanf("%c", &opcao);
        toupper(opcao);
    }while (opcao=='S');
    return 0;
}
