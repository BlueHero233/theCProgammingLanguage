/*Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar.
Exemplo:
Informe um valor double: 123.456789

Numero informado: 123.456789
Parte inteira: 123
Parte decimal: 0.456789
Parte decimal como inteiro de tres digitos: 456
Centena(s): 1
Dezena(s): 2
Unidade(s): 3*/
#include <stdio.h>
int main(void)
{
    double numero;
    printf("Informe um valor double:\n");
    scanf("%lf", &numero);
    printf("Numero informado: %lf\n", numero);
    printf("Parte inteira: %d\n", (int)numero);
    printf("Parte decimal como inteiro de tres digitos: %f\n", ((float)numero)-(int)numero);
    printf("Centena(s): %d\n", (int)numero/100);
    printf("Dezena(s): %d\n", (int)numero/10%10);
    printf("Unidade(s): %d\n", (int)numero/1%10);
    return 0;
}