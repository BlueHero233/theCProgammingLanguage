/* Ler um valor inteiro que representa o mˆes de uma data e apresentar o trimestre
correspondente.*/
#include <stdio.h>
int main(void){
    int mes;
	printf("Informe o mes:\n");
	scanf("%d",&mes);
	if(mes<=0||mes>12){
		printf(" Numero digitado nao corresponde a um mes do ano!!!\n");
		return 0;
	}
	if(mes<=3) 
        printf("primeiro trimestre!\n");
	if(mes>3&&mes<=6)
        printf("segundo trimestre!\n");
	if(mes>6&&mes<=9)
        printf("terceiro trimestre!\n");
	if(mes>9&&mes<=12)
        printf("quarto trimestre!\n");
	return 0;
}