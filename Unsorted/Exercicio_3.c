#include <stdio.h>
#include <math.h>


int quadradoPerf(int num){
	if((int)sqrt(num)-(float)sqrt(num)==0) return 1;
		else return 0;
}

int main(void){
	int num,num2;
	char opt;
	
	do{
	printf("1 - Verifica se um numero eh quadrado perfeito \n");
	printf("2 - Mostra os numeros quadrados perfeitos que pertencem a um intervalo\n");
	printf("Opcao: ");
	scanf(" %c",&opt);

	switch(opt){
		case'1':
			printf("Informe um numero: ");
			scanf(" %d",&num);
			if(quadradoPerf(num)==1) printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %d\n",num,num,(int)sqrt(num));
				else printf("%d nao eh um quadrado perfeito\n",num);
		break;
		case'2':
			printf("Informe o intervalo inferior: ");
			scanf(" %d",&num);

			printf("Informe o intervalo superior: ");
			scanf(" %d",&num2);
			
			for(int i=num;i<=num2;i++) if(quadradoPerf(i)==1) printf("%d eh um quadrado perfeito ==> raiz quadrada de %d eh %d\n",i,i,(int)sqrt(i));
		break;
		
	}
	printf("Deseja repetir a execucao do programa (S ou N)? ");
	scanf(" %c",&opt);
	}while(opt=='s'||opt=='S');
	return 0;
}
