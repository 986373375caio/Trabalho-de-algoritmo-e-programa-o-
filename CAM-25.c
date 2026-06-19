#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-25 - Notas e Aprovação * ");
    printf("\n**************************************************************************************** \n");
 
  float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aluno APROVADO.\n");
    } else if (media >= 5) {
        printf("Aluno em RECUPERACAO.\n");
    } else {
        printf("Aluno REPROVADO.\n");
    }

    return 0;
}
