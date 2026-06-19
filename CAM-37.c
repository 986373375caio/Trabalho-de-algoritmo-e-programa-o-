#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-37 - 	Soma de Números até digitar zero * ");
    printf("\n**************************************************************************************** \n");
 
   int numero, soma = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero;

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Soma total = %d\n", soma);

    return 0;
}
