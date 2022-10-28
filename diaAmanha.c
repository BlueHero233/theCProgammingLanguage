#include <stdio.h>

int main()
{
  int dia, mes, ano, diasPorMes=31;
  printf("Insira a data (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  if ((dia<=0||dia>31||mes<=0||mes>=13)||(29<=dia&&mes==2&&a%4!=0&&a%400!=0))
    printf("Data Invalida!\n");
  else
  {
    dia++;
    if (mes==4||mes==6||mes==9||mes==11)
      diasPorMes=30;
    else if (mes==2)
    {
      diasPorMes=28;
      if (ano%4==0)
      {
        diasPorMes=29;
        if (ano%100==0)
        {
          diasPorMes=28;
          if (ano%400==0)
          diasPorMes=29;
        }
      }
    }
    if (dia>diasPorMes)
    {
        dia=1;
        mes++;
        if (mes>12)
        {
          mes=1;
          ano++;
        }
    }
    printf("A data de amanha eh: %d/%d/%d\n", dia, mes, ano);
    return 0;
  }
}
