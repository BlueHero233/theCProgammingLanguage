/*Exercicio 04: Efetuar a leitura de dois n´umeros inteiros e apresentar a rela¸c˜ao existente entre
eles, ou seja, o primeiro ´e maior que o segundo, os n´umeros s˜ao iguais, ou ainda, o segundo e maior que
o primeiro.*/
#include <stdio.h>
int main(void){
	int a,b;
	printf("Informe o primeiro numero:\n");
	scanf("%d",&a);
	printf("Informe o segundo numero:\n");
	scanf("%d",&b);
	if(a!=b) 
        printf("O numero maior eh: %d\n",(a>b)?a:b);
	if(a==b) 
        printf("Os numeros sao iguais\n");
	return 0;
}