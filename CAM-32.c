#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Maatos- RA:0028777 *");
    printf("\n* Programa CAM-32 - Quadrado dos Números de 1 a 10 * ");
    printf("\n**************************************************************************************** \n");
 
 int i;

    for(i = 1; i <= 10; i++) {
        printf("%d ao quadrado = %d\n", i, i * i);
    }

    return 0;
}
