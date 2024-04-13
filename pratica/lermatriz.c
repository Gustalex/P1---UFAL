#include <stdio.h>

void lermatriz(int numcol, int numlinha, int matriz[numlinha][numcol]) {
    
    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void printmatriz(int numlinhas, int numcol, int matriz[numlinhas][numcol]) {
    
    for (int i = 0; i < numlinhas; i++) {
        for (int j = 0; j < numcol; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
   
    int linha, coluna;
    scanf("%d %d", &coluna, &linha);

    int matriz[linha][coluna];

    lermatriz(coluna, linha, matriz);
    printmatriz(linha, coluna, matriz);

    return 0;
}
