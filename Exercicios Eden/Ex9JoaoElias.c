/*: Elabore um programa que leia o dia e o mˆes de nascimento de uma pessoa e
determine o seu signo conforme a tabela a seguir:
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int dia, mes;
    printf("Digite o dia de nascimento:\n");
    scanf("%d",&dia);
    printf("Digite o mes de nascimento (em numero):\n");
    scanf("%d",&mes);
    if ((mes == 1 && dia >= 22) || (mes == 2 && dia <= 19))
        printf("Signo: Aquario");
    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
        printf("Signo: Peixes");
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
        printf("Signo: Aries");
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
        printf("Signo: Touro");
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        printf("Signo: Gemeos");
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21))
        printf("Signo: Cancer");
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22))
        printf("Signo: Leao");
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        printf("Signo: Virgem");
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Signo: Libra");
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Signo: Escorpiao");
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Signo: Sagitario");
    else
        printf("Signo: Capricornio");
    return 0;
}