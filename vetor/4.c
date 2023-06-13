#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    int i;

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int vetor[10];
    int i;

    printf("Digite 10 números:\n");

    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Números primos no vetor:");

    for (i = 0; i < 10; i++) {
        if (ehPrimo(vetor[i])) {
            printf(" %d", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}
