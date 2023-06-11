#include <stdio.h>

int main() {
    int num;

    printf("Digite um número:\n[+] ");
    scanf("%d", &num);

    printf("Tabuada do número %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        int res = num * i;
        printf("%d x %d = %d\n", num, i, res);
    }

    return 0;
}
