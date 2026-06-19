#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CSMA-43 - Soma dos pares entre 1 e 100 * ");
    printf("\n**************************************************************************************** \n");
    
    int soma = 0, numero = 2;

    while (numero <= 100) {
        soma += numero;
        numero += 2;
    }

    printf("Soma dos pares entre 1 e 100 = %d\n", soma);

    return 0;
}
