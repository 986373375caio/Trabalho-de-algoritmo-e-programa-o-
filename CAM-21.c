#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos - RA:0028777 *");
    printf("\n* Programa CAM-21 - Número positivo ou negativo * ");
    printf("\n**************************************************************************************** \n");
 
float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Numero positivo.\n");
    }
    else if (numero < 0) {
        printf("Numero negativo.\n");
    }
    else {
        printf("Numero igual a zero.\n");
    }

    return 0;
}
