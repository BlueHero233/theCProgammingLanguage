/* O Indice de Massa Corporal (IMC) e uma formula que indica se um adulto
esta acima do peso, se est´a obeso ou abaixo do peso ideal considerado saud´avel.
 A formula para calcular o Indice de Massa Corporal e: IMC = peso/(altura)^2
A Organizacao Mundial de Saude usa um criterio simples para considerar quem est´a acima do peso e
quem e obeso: Desenvolva um programa que leia o peso (em kg, tipo float) e altura (em metros, tipo float) e em seguida
calcule o IMC e mostre qual a situacao do adulto de acordo com a tabela:*/
#include <stdio.h>
int main(void){
	float imc,peso,altura;
	printf("Informe o peso(kg):\n");
	scanf("%f",&peso);
	printf("Informe o altura(m):\n");
	scanf("%f",&altura);
	imc=peso/(altura*altura);
	if(imc<20) 
        printf("Abaixo do peso\n");
	if(imc>20&&imc<=25) 
        printf("Peso normal\n");
	if(imc>25&&imc<=30) 
        printf("Acima do peso\n");
	if(imc>30&&imc<=34) 
        printf("Obeso\n");
	if(imc>34) 
        printf("Muito obeso\n");
	return 0;
}