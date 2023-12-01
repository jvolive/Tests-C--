#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3]) {
    // Leitura do valor da meta
    int meta;
    printf("Digite o valor da meta: ");
    scanf("%d", &meta);

    // Somar os valores das duas matrizes
    int matrizTotal[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTotal[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    // Mostrar a matriz total
    printf("\nMatriz Total:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrizTotal[i][j]);
        }
        printf("\n");
    }

    // Escrever na tela os setores que alcançaram a meta
    printf("\nSetores que alcançaram a meta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrizTotal[i][j] >= meta) {
                printf("Setor %d de %d\n", i + 1, j + 1);
            }
        }
    }
}

int main() {
    int dia1[3][3];
    int dia2[3][3];
    int i, j;

    // Leitura da matriz no primeiro dia
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d no dia 1: ", i + 1, j + 1);
            scanf("%d", &dia1[i][j]);
        }
    }

    // Leitura da matriz no segundo dia
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d no dia 2: ", i + 1, j + 1);
            scanf("%d", &dia2[i][j]);
        }
    }

    // Validar a meta
    validarMeta(dia1, dia2);

    return 0;
}
