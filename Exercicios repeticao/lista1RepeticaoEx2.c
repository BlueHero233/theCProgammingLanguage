/*Ler uma série de números indicados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
considerado.*/
#include <stdio.h>
int main(void)
{
    int num, menor=0, maior=0;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    maior=num;
    menor=num;
        do
        {
            printf("Informe um numero:\n");
            scanf("%d", &num);
            if (num>=maior)
                maior=num;
            if (num<=menor&&num!=0)
                menor=num;
        } while (num!=0);
    printf("Maior:%d\tMenor:%d", maior, menor);
    return 0;
}