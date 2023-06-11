#include <stdio.h>

int main() {
    float met, dec, cent, mil;

    printf("Digite um valor em metros:[+]\n ");
    scanf("%f", &met);

    dec = met * 10;
    cent = met * 100;
    mil = met * 1000;

    printf("%.2fm ==> %.2f decímetros\n", met, dec);
    printf("%.2fm ==> %.2f centímetros\n", met, cent);
    printf("%.2fm ==> a %.2f milímetros\n", met, mil);

    return 0;
}
