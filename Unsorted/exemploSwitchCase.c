#include <stdio.h>

int main(void)
{
    int num1, num2, opcao;

    //Entrada de dados
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Resto\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\nInforme um numero: ");
    scanf("%d", &num1);
    printf("Informe um numero: ");
    scanf("%d", &num2);

    //Processamento e saída de dados
    switch(opcao)
    {
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        case 4:
            if(num2 != 0)
            {
                printf("Divisao: %d\n", num1 / num2);
            }
            else
            {
                printf("Nao eh possivel divisao por 0\n");
            }
            break;
        case 5:
            if(num2 != 0)
            {
                printf("Resto: %d\n", num1 % num2);
            }
            else
            {
                printf("Nao eh possivel divisao por 0\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
