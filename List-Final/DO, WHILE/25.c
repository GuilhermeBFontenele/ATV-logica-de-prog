#include <stdio.h>

int main() {
    int quan;
    float nota, somaNotas = 0.0;
    int cont = 1;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &quan);

    while (cont <= quan) {
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);

        somaNotas += nota;
        cont++;
    }

    float media = somaNotas / quan;

    printf("A média aritmética da turma é: %.2f\n", media);

    return 0;
}
