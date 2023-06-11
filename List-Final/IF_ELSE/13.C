#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade:\n[+] ");
    scanf("%d", &idade);

if (idade >= 18 && idade <= 67){
    printf("Doação Liberada[+]\n");
}
else{
    printf("Doação não liberada\n");
}

    return 0;
}