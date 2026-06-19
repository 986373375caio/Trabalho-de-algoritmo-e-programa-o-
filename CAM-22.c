#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos - RA:0028777*");
    printf("\n* Programa CAM-22 - Par ou Ímpar * ");
    printf("\n**************************************************************************************** \n");
 
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero é PAR.\n");
    } else {
        printf("O numero e IMPAR.\n");
    }

    return 0;
}
