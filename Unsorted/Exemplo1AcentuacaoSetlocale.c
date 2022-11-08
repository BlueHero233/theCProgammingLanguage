#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    printf("Utilizando caracteres e acentuação da língua portuguesa!\n");

    return 0;
}
