  #include <stdio.h>

  int main(void)
  {
       int num, cont=0;

       printf("Informe um numero: ");
       scanf("%d", &num);

       do
       {
          printf("%d * %d = %d\n", num, cont, num*cont);
          cont++;
       }while(cont<=10);

       return 0;
  }
