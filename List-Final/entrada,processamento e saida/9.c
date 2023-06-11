#include <stdio.h>

int main() {
    float temp, vel, dis;

    printf("digite o tempo da viagem:\n[+]");
    scanf("%f", &temp);

    printf("Digite a velocidade média:\n[+] ");
    scanf("%f", &vel);

    dis = temp * vel;

    printf("A distância percorrida é: %.2f km\n", dis);

    return 0;
}