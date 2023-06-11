#include <stdio.h>

int main() {
    int total_alunos = 5;
    float notas[total_alunos][4];
    float media_aluno[total_alunos];
    float media_turma = 0.0;

    int i = 0;
    do {
        printf("Notas do aluno %d:\n", i+1);
        int j = 0;
        do {
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
            j++;
        } while (j < 4);
        printf("\n");
        i++;
    } while (i < total_alunos);

    i = 0;
    while (i < total_alunos) {
        media_aluno[i] = (notas[i][0] * 3 + notas[i][1] * 2 + notas[i][2] + notas[i][3]) / 7;
        i++;
    }

    i = 0;
    while (i < total_alunos) {
        media_turma += media_aluno[i];
        i++;
    }
    media_turma /= total_alunos;

    printf("Resultados:\n");
    i = 0;
    while (i < total_alunos) {
        printf("Aluno %d:\n", i+1);
        printf(" - Média: %.2f\n", media_aluno[i]);
        if (media_aluno[i] >= 7.0) {
            printf(" - Situação: Aprovado\n");
        } else if (media_aluno[i] >= 4.0) {
            printf(" - Situação: Recuperação (precisa de %.2f para ser aprovado)\n", 10 - media_aluno[i]);
        } else {
            printf(" - Situação: Reprovado\n");
        }
        printf("\n");
        i++;
    }
    printf("Média da turma: %.2f\n", media_turma);

    return 0;
}
