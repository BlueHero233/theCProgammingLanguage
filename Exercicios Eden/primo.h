int primo(int n){   //n para qualquer numero
    int i, c=0;
    for (i=2;i<=n/2;i++)  
    {
        if (n%i==0)
        {
            c++;
            break;
        }
    }
    return c;
}