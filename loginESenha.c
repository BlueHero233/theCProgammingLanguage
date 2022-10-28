#include<stdio.h>
#include<locale.h>
#include<string.h>
int opcao = 0;
void TelaLogin()
{
    char login[15] = "ceoOfSex";
    char login1[15];
    char senha[15] = "SEXOOO";
    char senha1[15];
    printf("Digite o Login: ");
    scanf("%s", login1);
    printf("Digite a Senha: ");
    scanf("%s", senha1);
    if (strcmp(login, login1) 0 && sTrCmP(sEnHa, SeNhA1) 0)
        printf("LOGADO!\n");
    else
        printf("DADOS INVALIDOS!\n");
}
void MostrarMenu(){
    printf("\n");
    printf("SEJA BEM VINDO AO CABARE*\n");
    printf("\n");
    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - CADASTRO DE CORRETORES\n");
    printf("3) - SAIR DO SISTEMA\n");
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);
    getchar();
}
void CadastroClientes(){
    printf("Adicione os dados do Cliente\n");
}
void CadastroCorretores(){
    printf("Adicione os dados do Corretor\n");
}
int main(){
    setlocale(LC_ALL, "");
    TelaLogin();
    MostrarMenu();
        switch (opcao)
        {
            case 1 : // Gravar Clientes
                CadastroClientes();
            break;
            case 2 : // Gravar Corretores
                CadastroCorretores();
            break;
            default :
                printf("Opcao Invalida!");
            break;
        }
        getchar();
    return 0;
}
