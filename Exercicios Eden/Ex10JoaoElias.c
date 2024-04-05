/* Escreva um programa em C que receba trˆes n´umeros inteiros diferentes digitados no teclado e imprima a soma, a m´edia, o produto, o menor e o maior desses n´umeros. A tela de
di´alogo deve aparecer como se segue:
*/
#include <stdio.h>
int main(void){
    int a,b,c;
	printf("Informe o primeiro numero:\n");
	scanf("%d",&a);
	printf("Informe o segundo numero:\n");
	scanf("%d",&b);
	printf("Informe o terceiro numero:\n");
	scanf("%d",&c);
	printf("Soma: %d\n",(a+b+c));
	printf("Media: %d\n",(a+b+c)/3);
	printf("Produto: %d\n",(a*b*c));
	printf("Menor: %d\n",(a<b&&b<c)?a:(b<a&&a<c)?b:(b<c&&c<a)?b:(c<b&&b<a)?c:(a<c&&c<b)?a:(c<a&&a<b)?c:-1);
	printf("Maior: %d\n",(a>b&&b>c)?a:(b>a&&a>c)?b:(b>c&&c>a)?b:(c>b&&b>a)?c:(a>c&&c>b)?a:(c>a&&a>b)?c:-1);
	return 0;
}