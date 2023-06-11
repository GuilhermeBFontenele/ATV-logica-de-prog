#include <stdio.h>
#include <string.h>

int main() {
    char nome[10];

    printf("Digite um nome:\n[+]");
    scanf("%s", nome);

    if (strlen(nome) >= 4) {
        printf("As 4 primeiras letras do nome são: %.4s\n", nome);
    } else {
        printf("O nome é curto\n");
    }

    return 0;
}