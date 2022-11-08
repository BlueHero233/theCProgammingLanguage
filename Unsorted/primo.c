#include <stdio.h>
int primo(int n);
int main(void){
    int num, i;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    if (primo(num)==0)
    {
        printf("O numero %d eh primo", num);
    }
    else
    {
        printf("O numero %d nao eh primo", num);
    }
    return 0;
}
int primo(int n){   //n para qualquer numero
    int i, divisores=0;
    for (i=2;i<=n;i++)  
    {
        if (n%i==0)
        {
            divisores++;
            break;
        }
    }
    return divisores;
}