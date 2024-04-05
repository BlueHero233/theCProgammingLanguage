/*Exercicio 01: Elabore um programa que, dada a idade de um jogador de futebol, classifique-o
em uma das seguintes categorias:
Obs.: Se a idade for menor do que 0 (zero) informe: OPCAO INVALIDA!*/
#include <stdio.h>
int main(void){
    int idade;
    printf("Informe a idade:\n");
    scanf(" %d",&idade);
    if(idade<0)
        printf("OPCAO INVALIDA!\n");
    if(idade>0&&idade<=4)
        printf("AINDA EH CEDO PARA JOGAR FUTEBOL!!!\n");
    if(idade>5&&idade<=10)
        printf("Sub-10\n");
    if(idade>11&&idade<=17)
        printf("Sub-17\n");
    if(idade>18&&idade<=20)
        printf("Sub-20\n");
    if(idade>21&&idade<=35)
        printf("Profissional\n");
    if(idade>36&&idade<=55)
        printf("Master\n");
    if(idade>56)
        printf("MELHOR APOSENTAR AS CHUTEIRAS...\n");
    return 0;
}