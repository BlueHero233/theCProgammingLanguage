/*Ler o numerador e o denominador de uma divis˜ao e realiz´a-la verificando a
posibilidade de “divis˜ao por zero”.*/
#include <stdio.h>
int main(void){
   float num,den;
	printf("Informe o numerador:\n");
	scanf("%f",&num);
	printf("Informe o denominador:\n");
	scanf("%f",&den);
	if(den==0)
		printf("Erro: divisao por zero\n");
	printf("%.1f/%.0f=%.1f\n",num,den,(num/den));
	return 0;
}