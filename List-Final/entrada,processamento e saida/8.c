#include <stdio.h>
int main()
{
    float pre,vf,des;
    printf("digite o preço do produto:\n[+]");
    scanf("%f", &pre);

    des = pre * 0.09;
    vf = pre - des;

    printf("O valor final é: %.02f ",vf);


    return 0;
}