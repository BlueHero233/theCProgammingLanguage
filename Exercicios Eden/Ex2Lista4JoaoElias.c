#include <stdio.h>
#include <fatorial.h>
#include <ctype.h>
void impressao(int a);
void menu(){
    int opcao, numero;
    printf("(1) - Fatorial dos numeros entre 1 e 8\n");
    printf("(2) - Fatorial de um numero positivo\n");
    printf("Escolha uma opcao: ");
    scanf("%d",&opcao);
    switch (opcao){
    case 1:
        for (int i = 1; i <= 8; i++)
            impressao(i);
        break;
    case 2:
        do{
        printf("Informe um numero positivo\n");
        scanf("%d",&numero);
        if(numero<0)
            printf("Numero deve ser positivo!");
        }while(numero<0);
        impressao(numero);
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}
void impressao(int a){
    int i;
    printf("%d! = ", a);
    for (i=a;i>=2;i--)
        printf("%d * ", i);
    printf("1 = %d\n", fatorial(a));
}
int main(void){
    char rep;
    do{
        menu();
        printf("Deseja repetir o programa (S ou N)?");
        scanf(" %c",&rep);
        }while(toupper(rep)=='S');
    return 0;
}