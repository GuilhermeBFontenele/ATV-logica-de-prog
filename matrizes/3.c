#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nSoma dos valores: %d\n", soma);

    return 0;
}
