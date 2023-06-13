#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior, menor;

    printf("Digite 10 números:\n");

    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O maior: %d\n", maior);
    printf("O menor é: %d\n", menor);
    printf("A diferença é: %d\n", maior - menor);

    return 0;
}
