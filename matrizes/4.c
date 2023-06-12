#include <stdio.h>

int main() {
    int matriz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
