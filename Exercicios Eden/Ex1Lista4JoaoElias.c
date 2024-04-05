#include <stdio.h>
#include <primo.h>
#include <ctype.h>
void menu(){
    int numero,opcao;
    float s=0, p=0;
    printf("(1) - Verificar se um numero eh ou nao primo\n");
    printf("(2) - Exibir os numeros primos entre 1 e 100\n");
    printf("(3) - Media dos numeros primos entre 200 e 100\n");
    printf("Escolha uma opcao: ");
    scanf("%d",&opcao);
    switch (opcao){
    case 1:
        do{
        printf("Informe um numero positivo\n");
        scanf("%d",&numero);
        if(numero<0)
            printf("Numero deve ser positivo!\n");
        if(numero==1)
            printf("1 nao eh primo\n");
        }while(numero<0||numero==1);
        if(primo(numero)==0)
            printf("%d eh primo\n",numero);
        else
            printf("%d nao eh primo\n",numero);
        break;
    case 2:
        for (int i = 2; i <= 100; i++){
            if(primo(i)==0)
                printf("%d, ",i);
        }
        putchar('\n');
        break;
    case 3:
        for (int i = 100; i <= 200; i++){
            if(primo(i)==0){
                p++;
                s+=i;
            }
        }
        printf("Media dos primos entre 200 e 100: %.2f\n", s/p);
        break;
    default:
        printf("Opcao invalida! Pressione ENTER\n");
        break;
    }
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