#include <stdio.h>
#include "calc.h"

int main() {
    double num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
        
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", somar(num1,num2));
            break;
        case '-':
            printf("Resultado: %.2f\n", subtrair(num1,num2));
            break;
        case '*':
            printf("Resultado: %.2f\n", multiplicar(num1,num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2f\n", dividir(num1,num2));
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }

    return 0;
}
