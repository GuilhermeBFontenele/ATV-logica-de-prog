#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite o dia do aniversário: ");
    scanf("%d", &dia);

    printf("Digite o mês do aniversário: ");
    scanf("%d", &mes);

    printf("Digite o ano do aniversário: ");
    scanf("%d", &ano);

    if (ano != 2023) {
        printf("Data inválida: Ano incorreto.\n");
    } else if (mes < 1 || mes > 12) {
        printf("Data inválida: Mês inválido.\n");
    } else if (dia < 1 || dia > 31) {
        printf("Data inválida: Dia inválido.\n");
    } else {
        printf("Data válida.\n");
    }

    return 0;
}
