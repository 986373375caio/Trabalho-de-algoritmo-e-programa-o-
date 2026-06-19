#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: CaioAlves de Matos- RA:0028777 *");
    printf("\n* Programa CSMA-27 - Tabuada de um Número * ");
    printf("\n**************************************************************************************** \n");
 
   int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
