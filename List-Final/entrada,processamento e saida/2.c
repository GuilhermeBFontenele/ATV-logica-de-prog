#include <stdio.h>

int main()
{   int num,ant,suc;
    printf("Digite um numero\n[+]");
    scanf("%d", &num);
    ant = num-1;
    suc = num+1;

    printf("[-]O antecessor de %d é %d\n", num, ant);
    printf("[+]O sucessor de %d é %d\n", num, suc);


    return 0;
}
