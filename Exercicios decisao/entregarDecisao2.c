/*Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
Menu de opções:
1 – Mostra os números em ordem crescente
2 – Mostra os números em ordem decrescente
3 - Mostra os números que são múltiplos de 2
Digite a opção desejada:
Observações: Ler um conjunto de 4 valores inteiros: opcao, a, b e c. A seguir:
a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.
b) Se opcao = 2 escrever os três valores a, b e c em ordem decrescente.
c) Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2.
Exemplo:
Entrada Saída
a=4, b=2 e c=8 Os números 2, 4 e 8 são múltiplos de 2
a=3, b=2 e c=8 Apenas os números 2 e 8 são múltiplos de 2
a=3, b=9 e c=8 Apenas o número 8 é múltiplo de 2
Se for informado um valor diferente para opcao, deverá ser emitida a mensagem "Opção Inválida" e o
programa deverá ser finalizado.
Atenção: Neste programa você deverá usar somente as variáveis opcao, a, b e c, todas do tipo int.*/
#include <stdio.h>
int main(void)
{
    int opcao, a, b, c;
    printf("Menu de opções:\n");
    printf("1 – Mostra os números em ordem crescente\n");
    printf("2 – Mostra os números em ordem decrescente\n");
    printf("3 - Mostra os números que são múltiplos de 2\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Insira os valores de a, b e c\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a<b&&a<c)
        {
            if(b<c)
            printf("%d %d %d", a, b, c);
            else
            printf("%d %d %d", a, c, b);
        }
        if (b<a&&b<c)
        {
            if(a<c)
            printf("%d %d %d", b, a, c);
            else
            printf("%d %d %d", b, c, a);
        }
        if (c<a&&c<b)
        {
            if (a<b)
            printf("%d %d %d", c, a, b);
            else
            printf("%d %d %d", c, b, a);
        }
        break;
    case 2:
        printf("Insira os valores de a, b e c\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a>b&&a>c)
        {
            if(b>c)
            printf("%d %d %d", a, b, c);
            else
            printf("%d %d %d", a, c, b);
        }
        if (b>a&&b>c)
        {
            if(a>c)
            printf("%d %d %d", b, a, c);
            else
            printf("%d %d %d", b, c, a);
        }
        if (c>a&&c>b)
        {
            if (a>b)
            printf("%d %d %d", c, a, b);
            else
            printf("%d %d %d", c, b, a);
        }    
        break;
    case 3:
        printf("Insira os valores de a, b e c\n");
        scanf("%d%d%d", &a, &b, &c);
        if(a%2==0&&b%2==0&&c%2==0)  
            printf("Os números %d, %d e %d são múltiplos de 2", a, b, c);
        else if(a%2==0&&b%2==0)
            printf("Apenas os números %d, %d são múltiplos de 2", a, b);
        else if(a%2==0&&c%2==0)
            printf("Apenas os números %d, %d são múltiplos de 2", a, c);
        else if(b%2==0&&c%2==0)
            printf("Apenas os números %d, %d são múltiplos de 2", b, c);
        else if(a%2==0)
            printf("Apenas o número %d são múltiplos de 2", a);
        else if(b%2==0)
            printf("Apenas o número %d são múltiplos de 2", b);
        else if(c%2==0)
            printf("Apenas o números %d são múltiplos de 2", c);
        else
            printf("Nenhum numero é multiplo de dois");
        break;
    default:
        printf("Opção Invalida");
        break;
    }
    return 0;
}