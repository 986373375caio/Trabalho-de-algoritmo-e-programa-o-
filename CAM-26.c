ude<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-26 - Contar de 1 a 10 * ");
    printf("\n**************************************************************************************** \n");
 
int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}
