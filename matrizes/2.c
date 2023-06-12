#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
            matriz2[i][j] = matriz1[i][j] * 2;
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
