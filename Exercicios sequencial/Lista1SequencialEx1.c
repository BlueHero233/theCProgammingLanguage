#include <stdio.h>
//Escreva um algoritmo que leia o comprimento (cm)
//a largura (cm) e a altura (cm) de uma caixa retangular
//e calcule o seu volume (cm3), cuja fórmula é:
//Volume = Comprimento * Largura * Altura
int main (void)
{
    float comprimento, largura, altura, volume;
    printf("Informe o comprimento em cm: \n");
    scanf("%f", &comprimento);
    printf("Informe a largura em cm: \n");
    scanf("%f", &largura);
    printf("Informe a altura em cm: \n");
    scanf("%f", &altura);
    volume=comprimento*largura*altura;
    printf("O volume eh %.2f cm^3", volume);
    return 0;
}
