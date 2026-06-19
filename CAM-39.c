#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: CaIO Alves DE Matos- RA:0028777 *");
    printf("\n* Programa CSMA-39 - Verifique se um número é positivo  * ");
    printf("\n**************************************************************************************** \n");
 
   int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("Número inválido. Digite novamente: ");
        scanf("%d", &numero);
    }

    printf("Número aceito: %d\n", numero);

    return 0;
}
