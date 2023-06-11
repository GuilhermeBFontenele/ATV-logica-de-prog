#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do quadrado (entre 1 e 20): ");
    scanf("%d", &tamanho);

    if (tamanho < 1 || tamanho > 20) {
        printf("Tamanho inválido. O tamanho deve estar entre 1 e 20.\n");
        return 0;
    }

    int i, j;

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
