#include <stdio.h>

int main(){
float pi = 3.141592;
float raio,di,are,comp;
printf("Digite o Raio da circunferência:\n[+]");
scanf("%f", &raio);

di = 2*raio;
comp = 2*pi*raio;
are = pi * (raio*raio);

printf("diâmetro ==> |%.2f|\ncomprimento ==> |%.2f|\nárea ==> |%.2f|\n",di,comp,are);

return 0;
}