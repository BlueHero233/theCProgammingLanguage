#include <stdio.h>

int main()
{
  int d, m, a, dpm=31;
  printf("Insira a data (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &d, &m, &a);
  if ((d<=0||d>31||m<=0||m>=13)||(29<=d&&m==2&&a%4!=0&&a%400!=0))
    printf("Data Invalida!\n");
  else
  {
    d++;
    if (m==4||m==6||m==9||m==11)
      dpm=30;
    else if (m==2)
    {
      dpm=28;
      if (a%4==0)
      {
        dpm=29;
        if (a%100==0)
        {
          dpm=28;
          if (a%400==0)
          dpm=29;
        }
      }
    }
    if (d>dpm)
    {
        d=1;
        m++;
        if (m>12)
        {
          m=1;
          a++;
        }
    }
    printf("A data de amanha eh: %d/%d/%d\n", d, m, a);
    return 0;
  }
}
