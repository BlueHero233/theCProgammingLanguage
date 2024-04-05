/* Efetuar a leitura de trˆes valores inteiros e apresentar o valor do meio*/
#include <stdio.h>
int main(void){
	int a,b,c;
	printf("Informe o primeiro numero:\n");
	scanf("%d",&a);
	printf("Informe o segundo numero:\n");
	scanf("%d",&b);
	printf("Informe o terceiro numero:\n");
	scanf("%d",&c);
    if(b>a&&a>c||c>a&&a>b)
	    printf("O numero do meio eh: %d\n",a);
    if(a>b&&b>c||c>b&&b>a)
        printf("O numero do meio eh: %d\n",b);
    if(a>c&&c>b||b>c&&c>a)
        printf("O numero do meio eh: %d\n",c);
	return 0;
}