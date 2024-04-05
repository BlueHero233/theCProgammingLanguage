/*Elabore um programa que dado o valor de “x” calcule a f(x) neste ponto, sendo
f(x) definida por:*/
#include <stdio.h>
int main(void){
	int x;
	printf("Informe o valor de x:\n");
	scanf("%d",&x);
	if(x<0){
		printf("2x + 4\n");
		printf("2(%d) + 4\n",x);
		printf("%d + 4\n",(2*x));
		printf("%d\n",(2*x)+4);
	}
	if(x>=0){
		printf("x + 1\n");
		printf("(%d) + 1\n",x);
		printf("%d\n",(x+1));
	}
	return 0;
}