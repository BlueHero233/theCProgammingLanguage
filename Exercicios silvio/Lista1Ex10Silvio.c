//algoritmo que converta um valor de temperatura de graus Celsius para
//graus Fahrenheit, cuja fórmula de conversão é: (9 * graus Celsius + 160) /5.
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Insira a temperatura em Celsius\n");
    scanf("%f", &celsius);
    fahrenheit=(9*celsius+160)/5;
    printf("A temperatura e %.2f graus Fahrenheit\n", fahrenheit);
    return 0;
}
