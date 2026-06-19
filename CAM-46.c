#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0027026 *");
    printf("\n* Programa CAM-46 - Contar de 1 a 10 * ");
    printf("\n**************************************************************************************** \n");
    
 int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
