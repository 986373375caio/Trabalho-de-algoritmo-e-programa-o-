#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos - RA:0028777 *");
    printf("\n* Programa CAM-20 - Ano bissexto * ");
    printf("\n**************************************************************************************** \n");
 
int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("Ano bissexto.\n");
    }
    else {
        printf("Nao e ano bissexto.\n");
    }

    return 0;
}
