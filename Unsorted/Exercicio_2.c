#include <stdio.h>
#include <math.h>

void retangular(int num) {
  int soma = 0, nums[(int) sqrt(num)];
  for (int i = 1; i < sqrt(num); i++) {
    nums[i - 1] = (2 + 2 * (i - 1));
    soma += (2 + 2 * (i - 1));
  }
  if (soma == num) {
    printf("%d eh retangular ==> ", num);

    for (int i = 1; i < sqrt(num); i++) {
      printf("%d", nums[i - 1]);
      if ((2 + 2 * (i - 1)) % 2 == 0 && i < sqrt(num) - 1) printf(" + ");
      if (i > sqrt(num) - 1) printf(" = %d\n", num);
    }

  } else printf("%d nao eh retangular", num);
  printf("\n");
}

int main(void) {
  int num, num2;
  char opt;

  do {
    printf("1 - Verifica se um numero eh retangular \n");
    printf("2 - Mostra os numeros retangular que pertencem a um intervalo\n");
    printf("Opcao: ");
    scanf(" %c", & opt);

    switch (opt) {
    case '1':
      printf("Informe um numero: ");
      scanf(" %d", & num);
      retangular(num);
      break;
    case '2':
      printf("Informe o intervalo inferior: ");
      scanf(" %d", & num);

      printf("Informe o intervalo superior: ");
      scanf(" %d", & num2);
      for (int i = num; i <= num2; i++) retangular(i);
      break;

    }
    printf("Deseja repetir a execucao do programa (S ou N)? ");
    scanf(" %c", & opt);
  } while (opt == 's' || opt == 'S');
  return 0;
}
