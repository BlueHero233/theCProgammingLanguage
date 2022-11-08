#include <stdio.h>
#include "minhasFuncoes.h"
int primo(int n);
int main(void){
    int num, i;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    if (primo(num)==0)
    {
        printf("O numero %d eh primo\n", num);
    }
    else
    {
        printf("O numero %d nao eh primo\n", num);
    }
    printf("Fatorial do numero %d eh %d\n", num, fatorial(num));
    return 0;
}