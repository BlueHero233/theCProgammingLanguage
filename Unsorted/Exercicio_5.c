#include <stdio.h>

void printMat(int col, int row, char chr){
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++)
			printf("%c ",chr);
	printf("\n");
	}
}

void interface(){
	char run,chr;
	int r,c=0;
	do{

	printf("Informe o numero de linhas: ");
	scanf(" %d",&r);

	printf("Informe o numero de colunas: ");
	scanf(" %d",&c);

	printf("Informe um caracter: ");
	scanf(" %c",&chr);

	printMat(r,c,chr);
	
	printf("Deseja repetir a execucao do programa (S ou N)? : ");
	scanf(" %c",&run);

	}while(run=='s'||run=='S');
}

int main(void){
	interface();
	return 0;
}
