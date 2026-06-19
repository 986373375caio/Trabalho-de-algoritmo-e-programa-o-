#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-47 - Tabuada de um número * ");
    printf("\n**************************************************************************************** \n");
    
 int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    return 0;
}
