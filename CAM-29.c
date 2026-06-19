#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-29 - Número Pares de 0 a 50 * ");
    printf("\n**************************************************************************************** \n");
 
    int i;

    for(i = 0; i <= 50; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
