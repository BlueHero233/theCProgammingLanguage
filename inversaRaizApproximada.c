#include <stdio.h>
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