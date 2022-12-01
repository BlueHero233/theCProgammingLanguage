#include <stdio.h>

int triangular(int num){
	int trigs[3]={0,0,0};
	for(int i=num;i>1;i--){
		for(int j=1; j<i;j++)
			if(i*j*(j+1) == num){
				if(i!=1 && j!=1 && i!=0 && j!=0){
					trigs[0]=j, trigs[1]=j+1, trigs[2]=i;
				}
			}
	}
	if(trigs[0]!=0) printf("%d eh triangular ==> %d * %d * %d = %d\n",num,trigs[0],trigs[1],trigs[2],num);
		else printf("%d nao eh triangular\n",num);
}

int main(void){
	int num,num2;
	char opt;
	
	do{
	printf("1 - Verifica se um numero eh triangular \n");
	printf("2 - Mostra os numeros triangulares que pertencem a um intervalo\n");
	printf("Opcao: ");
	scanf(" %c",&opt);

	switch(opt){
		case'1':
			printf("Informe um numero: ");
			scanf(" %d",&num);
			triangular(num);
		break;
		case'2':
			printf("Informe o intervalo inferior: ");
			scanf(" %d",&num);

			printf("Informe o intervalo superior: ");
			scanf(" %d",&num2);
			for(int i=num;i<=num2;i++) triangular(i);
		break;
		
	}
	printf("Deseja repetir a execucao do programa (S ou N)? ");
	scanf(" %c",&opt);
	}while(opt=='s'||opt=='S');
	return 0;
}
