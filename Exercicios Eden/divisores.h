int qnt_divisores(int numero){
    int qnt=0;
    for(int i=numero; i>0; i--) 
        if(numero%i==0) 
            qnt++;
    return qnt;
}

int divisores(int numero){
    int sum=0;
    for(int i=numero; i>0; i--){
        if(numero%i==0){
            printf("%d ", i);
            sum+=i;
        }
    }
    return sum;
}

void div_qnt_som_intervalo(int limiteInf, int limiteSup){
    int sum=0;
        for(int i=limiteInf; i<=limiteSup; i++){
            printf("%d - ", i);
            sum=divisores(i);
            printf(" => Qtde: %d => Soma: %d\n", qnt_divisores(i), sum);
    }
}

void mdc(int n1, int n2){
    int resto, c;
    int a=n1, b=n2;
    if (b > a) {
        c = n1;
        a = b;
        b = c;
    }
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    printf("MDC(%d, %d) = %d\n", n1, n2, a);
}