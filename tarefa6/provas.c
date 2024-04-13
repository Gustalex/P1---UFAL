#include <stdio.h>

void zerar(int notas[], int index) {
    if (index == 11) {
        return;
    }
    notas[index] = 0;
    zerar(notas, index + 1);
}

double maiornota(int notas[], int index, double maiorNota, int maior) {
    if (index == 11) {
        return (double)maior;
    }
    if (notas[index] > maiorNota) {
        maiorNota = notas[index];
        maior = index;
    }
    maiornota(notas, index + 1, maiorNota, maior);
}

double calcnota(char respostas[], char gabarito[], double totalQuestoes, double pontuacao, int index, int notas[]) {
    if (index > 9)
    {
        printf("%.0lf %.1lf\n", totalQuestoes, pontuacao);
        int notainteira = (int)pontuacao;
        notas[notainteira]++;
        return pontuacao;
    }
    if (gabarito[index] == respostas[index]) {
        pontuacao++;
    }
    calcnota(respostas, gabarito, totalQuestoes, pontuacao, index + 1, notas);
}

void compararRespostas(char respostas[], double aprovados, double totalAlunos, int notas[]) {
    double nota;
    char gabarito[10];
    scanf("%lf", &nota);
    if (nota == 9999) {
        double maiorNota = maiornota(notas, 0, 0, 0);
        printf("%.1lf%%\n", (aprovados / totalAlunos) * 100);
        printf("%.1lf", maiorNota);
        return;
    }
    scanf("%s", gabarito);
    double notaFinal = calcnota(respostas, gabarito, nota, 0, 0, notas);
    if (notaFinal >= 6) {
        aprovados++;
    }
    compararRespostas(respostas, aprovados, totalAlunos, notas);
}

int main() {
    int notas[11];
    char respostas[10];

    scanf("%s", respostas);
    zerar(notas, 0);
    compararRespostas(respostas, 0, 0, notas);
    return 0;
}
