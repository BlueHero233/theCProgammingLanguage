int digito, potencia, numero;
while()
{
potencia = 0;
while(numero>0)
{
    digito=numero%10;
    printf("Digito: %d\t", digito);
    potencia+=digito*digito;
    printf("Potencia: %d\t", potencia);
    numero/=10;
    printf("Numero: %d\n", numero);
}
numero=potencia;
passos++;
return(numero);
}