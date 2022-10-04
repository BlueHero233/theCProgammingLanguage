/* Ler o sexo (F ou f para feminino, M ou m para masculino. Para qualquer outro caractere informar que é
inválido e finalizar o programa). Se informado um caractere válido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7 */
#include <stdio.h>
int main(void)
{
    char sexo;
    float h, peso;
    printf("Informe o sexo:\n");
    scanf("%c", &sexo);
    switch (sexo)
    {
    case 'm':
    printf("Informe a altura da pessoa");
    scanf("%f", &h);
    peso=(72.7 * h) - 58;
    printf("o seu peso ideal seria %f", peso);
        break;
    case 'M':
    printf("Informe a altura da pessoa");
    scanf("%f", &h);
    peso=(72.7 * h) - 58;
    printf("o seu peso ideal seria %f", peso);
        break;
    case 'f':
    printf("Informe a altura da pessoa");
    scanf("%f", &h);
    peso=(62.1 * h) - 44.7;
    printf("o seu peso ideal seria %f", peso);
        break;
    case 'F':
    printf("Informe a altura da pessoa");
    scanf("%f", &h);
    peso=(62.1 * h) - 44.7;
    printf("o seu peso ideal seria %f", peso);
        break;
    default:
    printf("Sexo invalido");
        break;
    }
}