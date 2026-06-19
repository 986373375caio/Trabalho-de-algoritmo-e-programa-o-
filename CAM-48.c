#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-48 - Menu com opção de sair * ");
    printf("\n**************************************************************************************** \n");
    
  int opcao;

    do {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }

    } while (opcao != 2);

    printf("Programa encerrado.\n");

    return 0;
}
