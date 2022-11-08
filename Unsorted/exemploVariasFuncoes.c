#include <stdio.h>
#include "minhasFuncoes.h"
int main(void)
{
    int numero1, numero2, i;
    char escolha;
    printf("1 - Quadrado de um numero\n");
    printf("2 - Quadrado dos numeros de  1 a 10\n");
    printf("3 - Tabuada de um numero\n");
    printf("4 - Soma de dois numeros\n");
    printf("5 - Multiplicacao de dois numeros\n");
    printf("6 - Divisao de dois numeros\n");
    printf("7 - Fatorial de um numero\n");
    printf("8 - Fatorial dos numeros de 1 a 10\n");
    printf("9 - Verifica se um numero eh primo\n");
    printf("Escolha uma opcao: ");
    setbuf(stdin, NULL);
    scanf("%c", &escolha);
    switch(escolha)
    {
    case '1':
        printf("Informe um numero:\n");
        scanf("%d", &numero1);
        printf("O quadrado do numero %d eh %d\n", numero1, quadrado(numero1));
        break;
    case '2':
        printf("Numeros quadrados de 1 ate 10\n");
        for (i=1;i<=10;i++)
        {
            printf("%d", quadrado(i));
        }
        break;
    case '3':
        printf("Informe um numero:\n");
        scanf("%d", &numero1);
        printf("Tabuada do %d do 11 ate o 20\n", numero1);
        for (i=11;i<=20;i++)
        {
            printf("%d * %d = %d\n", numero1, i, produto(i, numero1));
        }
        break;
    case '4':
        printf("Informe dois numeros:\n");
        scanf("%d%d", &numero1, &numero2);
        printf("Soma dos numeros %d + %d = %d\n", numero1, numero2, soma(numero1,numero2));
        break;
    case '5':
        printf("Informe dois numeros:\n");
        scanf("%d%d", &numero1, &numero2);
        printf("Produto dos numeros %d * %d = %d\n", numero1, numero2, produto(numero1,numero2));
        break;
    case '6':
        printf("Informe dois numeros:\n");
        scanf("%d%d", &numero1, &numero2);
        printf("Divisao dos numeros %d/%d = %.2f\n", numero1, numero2, divisao(numero1,numero2));
        break;
    case '7':
        printf("Informe um numero:\n");
        scanf("%d", &numero1);
        printf("O fatorial do numero %d eh: %llu\n", numero1, fatorialLLU(numero1));
        break;
    case '8':
        printf("Fatorial dos numeros de 1 a 10\n");
        for (i=1;i<=10;i++)
        {
            impressaoFatorial(i);
        }     
        break;
    case '9':
        printf("Informe um numero:\n");
        scanf("%d", &numero1);
        informarPrimo(numero1);
        break;
    default:
        printf("Opcao invalida\n");
    }
    return 0;
}

