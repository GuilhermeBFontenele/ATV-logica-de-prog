#include <stdio.h>

int main() {
    float num1, num2;
    char operador;

    printf("Digite o primeiro número:\n[+] ");
    scanf("%f", &num1);

    printf("Digite o segundo número:\n[+] ");
    scanf("%f", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Res: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Res: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Res: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Res: %.2f\n", num1 / num2);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf(" inválido!\n");
            break;
    }

    return 0;
}
