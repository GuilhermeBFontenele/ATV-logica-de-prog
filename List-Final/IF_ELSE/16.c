#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um número:\n[+] ");
    scanf("%f", &num);

    if (num >= 0) {
        float raiz = sqrt(num);
        printf("raiz quadrada: %.2f\n", raiz);
    } else {
        float quadrado = num * num;
        printf("o quadrado é: %.2f\n", quadrado);
    }

    return 0;
}
