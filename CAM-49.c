#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CSMA-49 - Pedir senha até acertar * ");
    printf("\n**************************************************************************************** \n");
    
   int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while (senha != 1234);

    printf("Acesso liberado!\n");

    return 0;
}
