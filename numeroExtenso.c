#include <stdio.h>
int main()
{
    int val=0, digit=0;
    do
    {
        printf("Insira um numero:\n");
        scanf("%d", &val);
        if (val<0)
        {
            printf("%d eh invalido, o numero deve ser positivo\n", val);
            continue;
        }
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
        const char* d_extenso[]={"zero", "um", "dois", "tres", "quatro",
                                "cinco", "seis", "sete", "oito", "nove"};
        printf("O numero tem %d digitos, %d dos quais sao %s\n",
               d_conta, d_quero, d_extenso[digit]);
        printf("Deseja continuar? (S/N)");
        char crct;
        do {scanf("%c", &crct);}
        while (crct==10||crct==13);
        if ((crct=='N')||(crct=='n'))
        {
            break;
        }
    }while (1);
}
