/*Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea.
Esse �ndice mede a rela��o entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros)*/
#include <stdio.h>
int main()
{
    int peso, imc;
    float altura;
    printf("Informe o peso em kilogramas: \n");
    scanf("%d", &peso);
    printf("Informe a altura em metros: \n");
    scanf("%f", &altura);
    imc=(int)peso/(altura*altura);
    printf("O IMC eh %d \n", imc);
    return 0;
}
