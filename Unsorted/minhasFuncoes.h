int fatorial(int a)
{
    int fat=1, i;
    for (i=a;i>=1;i--)
    {
        fat=fat*i;
    }
    return fat;
}
void informarPrimo(int a)//5
{
    if (primo(a)==0)
    {
        printf("O numero %d eh primo\n", a);
    }
    else
    {
        printf("O numero %d nao eh primo\n", a);
    }
}
int soma(int a, int b)
{
    return a+b;
}
int produto(int a, int b)
{
    return a*b;
}
float divisao(int a, int b)
{
    float resultado;
    if (b==0)
    {
        resultado=0;
    }
    else
    {
        resultado=(float)a/b;
    }
    return resultado;
}
int primo(int n){   //n para qualquer numero
    int i, divisores=0;
    for (i=2;i<n;i++)  
    {
        if (n%i==0)
        {
            divisores++;
            break;
        }
    }
    return divisores;
}
unsigned long long fatorialLLU(int a)
{
    int fat=1, i;
    for (i=a;i>=1;i--)
    {
        fat=fat*i;
    }
    return fat;
}
int quadrado(int a)
{
    return a*a;
}
void impressaoFatorial(int a)
{
    int i;
    printf("%d! = ", a);
    for (i=a;i>=2;i--)
    {
        printf("%d * ", i);
    }
    printf("1 = %d\n", fatorial(a));
}
void fib(int n)
{
    int i, a=0, b=1, c;
    for (i=0;i<n;i++)
        {
            c=a+b;  //c=0+1
            a=b;    //a=1
            b=c;    //b=1
        }
    printf("%d\n", c);
}
float Q_rsqrt( float numero )
{
    long i; //numero 32 bits
    float x2, y; //numero decimal 32 bits
    const float tresMeios = 1.5F; // 1.5 32 bits
    //IEEE 754
    //0.00000000 00000000000000000000000
    //0 para positivo, 1 para negativo
    //oito bits para valores entre 128 e -127
    //mantissa 1 ate 2
    //(1+M/(2^23))*2^(E-127)
    //log2(1+x)~= x+u u=0.0430
    //M/2^23+u+E-127 ==> 1/2^23 (M+2^23*E)+u-127
    x2 = numero * 0.5F;
    y = numero;
    i = * ( long * ) &y;    //convertendo o endereco de memoria y float para long, permitindo manipulacao de bit
    //110=6
    //1100=12
    //11=3
    i = 0x5f3759df - ( i >> 1);
    //log(y^-1/2)=-1/2log(y)
    //3/2*2^23(127-0.0430)-1/2(i)
    y = * ( float * ) &i;   //revertendo o endereco 
    y = y * ( tresMeios - ( x2 * y * y ) );
    y = y * ( tresMeios - ( x2 * y * y ) );    //iteracao de newton
    return y;
}