#include <stdio.h>

int main()
{
    float sb, sf;
    printf("Insira o salario antigo\n");
    scanf("%f", &sb);
    sf=(sb+sb*0.05-sb*0.07);
    printf("O salario atualizado vale %.2f\n", sf);
    return 0;
}
