#include <stdio.h>

void somacolunas(int numcol, int numlinha, int matriz[numlinha][numcol]) {
    
    for (int j = 0; j < numcol; j++) {
        int soma = 0;
        for (int i = 0; i < numlinha; i++) {
            soma += matriz[i][j];
        }
        printf("Princesa %d: %d voto(s)\n", j + 1, soma);
    }
}

void lermatriz(int numcol, int numlinha, int matriz[numlinha][numcol]) {
    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int p, e;
    scanf("%d %d", &p, &e);

    int votacao[e][p];

    lermatriz(p, e, votacao);
    somacolunas(p, e, votacao);

    return 0;
}
