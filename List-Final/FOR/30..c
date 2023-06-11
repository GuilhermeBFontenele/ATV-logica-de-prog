#include <stdio.h>

int main() {
    int lista[10];

    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &lista[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }

    return 0;
}
