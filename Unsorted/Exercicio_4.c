#include <stdio.h>
#include <math.h>

int palindromo(int num){
	int p=0;
	if(num<=0) num=12;
	int nums[(((int)log10(num))+1)];
	
	for(int i=0; i<=(((int)log10(num))); i++)
		nums[(i-(((int)log10(num))))*-1]=((num%(int)pow(10,i+1) - num%(int)pow(10,i))/(int)pow(10,i));
		
	for(int i=0; i<=(((int)log10(num))); i++){
		if(nums[i]==((num%(int)pow(10,i+1) - num%(int)pow(10,i))/(int)pow(10,i))) p+=1;
		}
	if(p==(((int)log10(num)))+1) return 1;
		else return 0;
}

int main(void){
	int num,num2;
	char opt;
	
	do{
	printf("1 - Verifica se um numero eh palindromo \n");
	printf("2 - Mostra os numeros palindromos que pertencem a um intervalo\n");
	printf("Opcao: ");
	scanf(" %c",&opt);

	switch(opt){
		case'1':
			printf("Informe um numero: ");
			scanf(" %d",&num);
			if(palindromo(num)==1) printf("%d ==> Eh palindromo\n",num);
				else printf("%d ==> Nao eh palindromo \n",num);
		break;
		case'2':
			printf("Informe o intervalo inferior: ");
			scanf(" %d",&num);

			printf("Informe o intervalo superior: ");
			scanf(" %d",&num2);
			for(int i=num;i<=num2;i++) if(palindromo(i)==1) printf("%d ==> Eh palindromo\n",i);
		break;
		
	}
	printf("Deseja repetir a execucao do programa (S ou N)? ");
	scanf(" %c",&opt);
	}while(opt=='s'||opt=='S');
	return 0;
}
