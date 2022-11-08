/*Float � utilizado para definir uma vari�vel real que comporta valores pertencentes ao conjunto dos n�meros reais.*/
//%f � o formatador para n�mero de ponto flutuante e nota��o decimal.
/*A sintaxe \%[tam].[casa_dec]f � utilizada para formatar o n�mero de ponto flutuante, onde:
[tam]  indica o tamanho m�nimo do n�mero que deve ser impresso na sa�da. Se o n�mero
possuir um tamanho superior ao informado neste par�metro, o tamanho inserido em 'tam' n�o ser� respeitado.
[casa decimal] indica o n�mero de casas decimais que deve ser impressas.
Se colocarmos %2.3f e o n�mero tiver mais de duas casas na parte inteira elas ser�o exibidas.
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
