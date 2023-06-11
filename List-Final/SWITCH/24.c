#include <stdio.h>

int main() {
    char tipoCarro;
    float distanciaRodada, consumoEstimado;

    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipoCarro);

    printf("Digite a distância rodada em km: ");
    scanf("%f", &distanciaRodada);

    switch (tipoCarro) {
        case 'A':
            consumoEstimado = distanciaRodada / 8;
            break;
        case 'B':
            consumoEstimado = distanciaRodada / 9;
            break;
        case 'C':
            consumoEstimado = distanciaRodada / 12;
            break;
        default:
            printf("Tipo de carro inválido.\n");
            return 0;
    }

    printf("O consumo estimado é de %.2f litros.\n", consumoEstimado);

    return 0;
}
