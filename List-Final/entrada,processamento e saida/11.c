#include <stdio.h>

int main() {
    float valor_hora, salario_bruto, salario_liquido;
    int numero_aulas;
    float desconto_inss;

    printf("valor da hora aula:\n[+]");
    scanf("%f", &valor_hora);

    printf("número de aulas dadas:\n[+] ");
    scanf("%d", &numero_aulas);

    printf("porcentagem de desconto do INSS:\n[+] ");
    scanf("%f", &desconto_inss);

    salario_bruto = valor_hora * numero_aulas;
    salario_liquido = salario_bruto - (salario_bruto * (desconto_inss / 100));

    printf("O salário líquido do professor é: R$ %.2f\n", salario_liquido);

    return 0;
}
