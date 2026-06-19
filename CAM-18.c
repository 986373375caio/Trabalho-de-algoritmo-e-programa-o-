int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos - RA:0028777 *");
    printf("\n* Programa CSMA-18 - Login simples * ");
    printf("\n**************************************************************************************** \n");
 
    char usuario[20];
    char senha[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 &&
        strcmp(senha, "escola") == 0) {

        printf("Acesso Permitido!\n");
    }
    else {
        printf("Acesso Negado!\n");
    }

    return 0;
}
