/*Float é utilizado para definir uma variável real que comporta valores pertencentes ao conjunto dos números reais.*/
//%f é o formatador para número de ponto flutuante e notação decimal.
/*A sintaxe \%[tam].[casa_dec]f é utilizada para formatar o número de ponto flutuante, onde:
[tam]  indica o tamanho mínimo do número que deve ser impresso na saída. Se o número
possuir um tamanho superior ao informado neste parâmetro, o tamanho inserido em 'tam' não será respeitado.
[casa decimal] indica o número de casas decimais que deve ser impressas.
Se colocarmos %2.3f e o número tiver mais de duas casas na parte inteira elas serão exibidas.
Exemplo: %2.2f 12345.78
*/

/* Imprimir um valor no formato float */

#include <stdio.h>

int main(void)
{
    float num;

    printf("Informe um numero: "); // 4.5
    scanf("%f", &num);

    printf ("\nValor com 1 casa decimal: %.1f", num);               //4.5
    printf ("\nValor com 2 casas decimais: %.2f", num);             //4.50
    printf ("\nValor com 5 casas decimais: %.5f", num);             //4.50000
    printf ("\nValor com tamanho 9 e 5 casas decimais: %9.5f", num);//   4.50000
    printf ("\nValor com tamanho 9 e 2 casas decimais: %9.2f", num);//      4.50

    return 0;
}
