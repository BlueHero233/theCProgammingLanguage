#include <stdio.h>
int main()
{
    int val=0;
    do
    {
        printf("Insira um numero:\n");
        scanf("%d", &val);
        if (val<0)
        {
            printf("%d eh invalido, o numero deve ser positivo\n", val);
            continue;
        }
    int digit=0;
        printf("Insira um digito:\n");
        scanf("%d", &digit);
        if (digit<0)
        {
            printf("%d eh invalido, o digito deve ser positivo\n", digit);
            continue;
        }
    int d_conta=0;
    int d_quero=0;
    if (!val)
    {
        d_conta=1;
        if (digit==0) d_conta=1;
    }
        while (val)
        {
            int sobra = val % 10;
            if (sobra == digit) ++d_quero;
            ++d_conta;
            val /= 10;
        }
        const char* digitoExtenso[]={"zero", "um", "dois", "tres", "quatro",
                                "cinco", "seis", "sete", "oito", "nove"};
        printf("O numero tem %d digitos, %d dos quais sao %s\n",
               d_conta, d_quero, digitoExtenso[digit]);
        printf("Deseja continuar? (S/N)");
        char o;
        do {scanf(" %c", &o);}
        while (o==10||o==13);
        if ((o=='N')||(o=='n'))
        {
            break;
        }
    }while (1);
}
