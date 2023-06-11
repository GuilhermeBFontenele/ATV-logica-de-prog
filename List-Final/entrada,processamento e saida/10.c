#include <stdio.h>

int main() {
    int num;

    printf("Digite um número decimal:\n[+]");
    scanf("%d", &num);

    printf("[-]hexadecimal: 0x%X\n", num);
    printf("[-]octal: 0o%o\n", num);

    return 0;
}
