#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf(" primeiro número: ");
    scanf("%d", &num1);

    printf("segundo número: ");
    scanf("%d", &num2);

    printf("terceiro número: ");
    scanf("%d", &num3);

    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    
    printf("Números em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
