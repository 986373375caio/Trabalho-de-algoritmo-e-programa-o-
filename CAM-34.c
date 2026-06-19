#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos- RA:0028777 *");
    printf("\n* Programa CAM-34 - Verificar se um Número é Primo * ");
    printf("\n**************************************************************************************** \n");
 
 int num, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            divisores++;
        }
    }

    if(divisores == 2) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}
