#include <stdio.h>
/*Um professor atribui pesos de 1 a 3 para as notas de tr�s avalia��es, respectivamente. Fa�a um algoritmo
que receba as notas e calcule e mostre a m�dia ponderada. A m�dia e as notas ser�o valores do tipo float.
M�dia Ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3)/(1+2+3)*/
int main (void)
{
    float notaUm, notaDois, notaTres, mediaPonderada;
    printf("Informe a primeira nota: \n");
    scanf("%f", &notaUm);
    printf("Informe a segunda nota: \n");
    scanf("%f", &notaDois);
    printf("Informe a terceira nota: \n");
    scanf("%f", &notaTres);
    mediaPonderada=(notaUm*1+notaDois*2+notaTres*3)/6;
    printf("A sua nota eh %.2f", mediaPonderada);
    return 0;
}
