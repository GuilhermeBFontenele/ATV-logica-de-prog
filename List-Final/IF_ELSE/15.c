#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade:\n[+]");
    scanf("%d", &idade);

    if (idade >= 10 && idade <= 14) {
        printf("Infantil\n");
    } else if (idade >= 15 && idade <= 17) {
        printf("Juvenil\n");
    } else if (idade >= 18 && idade <= 25) {
        printf("Adulto\n");
    } else {
        printf("Categoria não correspondete\n");
    }

    return 0;
}
