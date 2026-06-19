#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Caio Alves de Matos - RA:0028777 *");
    printf("\n* Programa CAM-17 -   O Sensor do Parque Temático * ");
    printf("\n**************************************************************************************** \n");
 

    float altura;

    printf("Digite a altura da crianca (cm): ");
    scanf("%f", &altura);

    if (altura >= 140) {
        printf("LIBERADO - Luz Verde\n");
    }
    else {
        printf("BARRADO - Luz Vermelha\n");
    }

    return 0;
}
