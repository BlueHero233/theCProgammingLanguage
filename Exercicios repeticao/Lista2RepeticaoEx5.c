/*5) Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o valor
total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a quantidade for maior que zero. Se
informado zero ou valor negativo para a quantidade, não ler o valor unitário.
Exemplo:
Informe a quantidade do produto: 3
Informe o valor unitario do produto: 12.45
Informe a quantidade de um produto: 4
Informe o valor unitario do produto: 5.8
Informe a quantidade do produto: 0
TOTAL DA COMPRA: R$ 60.55

Informe o valor pago pelo cliente: 100
Troco: 39.45

O valor do troco sera devolvido com
3 notas de 10 reais
1 notas de 5 reais
4 notas de 1 real
e 0.45 centavos*/
#include <stdio.h>
int main(void)
{
    int quantidade, notasDez, notasCinco, notasUm;
    float valor, soma, troco, pagamento, centavos;
    do
    {   
        printf("Informe a quantidade do produto:\n");
        scanf("%d", &quantidade);
        if (quantidade>0)
        {
            printf("Informe o valor unitario do produto:\n");
            scanf("%f", &valor);
            soma=soma+(quantidade*valor);
        }
    } while (quantidade<0);
    notasDez=(int)troco/10;
    notasCinco=(int)%10/5;
    notasUm=(int)%5;
    centavos=troco-(int)troco;
    printf("O valor do troco sera devolvido com\n");
    printf("%d notas de 10 reais\n", notasDez);
    printf("%d notas de 5 reais\n", notasCinco);
    printf("%d notas de 1 real\n", notasUm);
    printf("e %f centavos\n", centavos);
    return 0;
}