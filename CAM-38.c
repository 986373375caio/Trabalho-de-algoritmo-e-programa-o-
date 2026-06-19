#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-38 - 	Soma Correta  * ");
    printf("\n**************************************************************************************** \n");
 
  int senha, senhaCorreta = 1234;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senhaCorreta) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso liberado!\n");

    return 0;
}
