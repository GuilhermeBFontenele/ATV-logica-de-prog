#include <stdio.h>

int main() {
    float valorCompra, valorVenda;
    
    printf("Digite o valor de compra:\n[+] ");
    scanf("%f", &valorCompra);
    
    if (valorCompra < 20.00) {
        valorVenda = valorCompra * 1.45; 
    } else {
        valorVenda = valorCompra * 1.30; 
    }
    
    printf("O valor de venda é: %.2f\n", valorVenda);
    
    return 0;
}
