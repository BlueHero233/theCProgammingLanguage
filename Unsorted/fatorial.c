#include <stdio.h>
unsigned long long fatorial(int a);
void impressao(int a);
int main(void){
    int num;
    printf("Informe um numero\n");
    scanf("%d", &num);
    printf("O fatorial do numero %d eh: %llu\n", num, fatorial(num));
    impressao(num);
    return 0;
}
unsigned long long fatorial(int a){
    int fat=1, i;
    for (i=a;i>=1;i--)
    {
        fat=fat*i;
    }
    return fat;
}
void impressao(int a){
    int i;
    printf("%d! = ", a);
    for (i=a;i>=2;i--)
    {
        printf("%d * ", i);
    }
    printf("1 = %d\n", fatorial(a));
}