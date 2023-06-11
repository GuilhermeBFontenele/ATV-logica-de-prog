#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2,soma,prod,quad,raiz,dif,sf;
    printf("Digite os numeros para as operações:\n");
    scanf("%f",&num1);
    scanf("%f",&num2);

    soma = num1 + num2;
    prod = num1 * pow(num2, 2);
    quad = pow(num1, 2);
    raiz = sqrt(pow(num1, 2) + pow(num2, 2));
    dif = num1 - num2;
    sf = sin(dif);
    printf("a)|%.2f|\nb)|%.2f|\nc)|%.2f|\nd)|%.2f|\ne)|%.2f|",soma,prod,quad,raiz,sf);


    return 0;
}
