/* Desenvolver um programa que calcula e retorna o Gasto Energ´etico Basal
(GEB), utilizando as seguintes f´ormulas:
para homens: GEB = 66.47 + (13.75 * PC) + (5 * Alt) – (6.76 * I)
para mulheres: GEB = 655.1 + (9.56 * PC) + (1.85 * Alt) – (4.67 * I)
onde: PC = Peso corporal em kg; Alt = altura em cm e I = Idade.*/
#include <stdio.h>
#include <ctype.h>
int main(void){
	float altura, peso, geb;
	char genero;
	int idade;
	printf("Informe o peso(kg):\n");
	scanf(" %f",&peso);
	printf("Informe o altura(m):\n");
	scanf(" %f",&altura);
	printf("Informe o idade:\n");
	scanf(" %d",&idade);
	printf("Informe o genero (M/F):\n");
	scanf(" %c",&genero);
	if(toupper(genero)=='M')
        geb=66.47+(13.75*peso)+(5*altura)-(6.76*idade);
	if(toupper(genero)=='F')
        geb=655.1+(9.56*peso)+(1.85*altura)-(4.67*idade);
	printf("GEB: %.2f Kcal\n",geb);
	return 0;
}