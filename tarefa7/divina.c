#include <stdio.h>

void printmatriz(int numlinhas, int numcol, int matriz[numlinhas][numcol]) {
    for (int i = 0; i < numlinhas; i++) {
        for (int j = 0; j < numcol; j++) {
            printf("%d\n", matriz[i][j]); 
        }
    }
}

void lermatriz(int numcol, int numlinha, int matriz[numlinha][numcol]) {
    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somarmatrizes(int numcol, int numlinha, int matriz1[numlinha][numcol], int matriz2[numlinha][numcol]) {
    for (int i = 0; i < numlinha; i++) {
        for (int j = 0; j < numcol; j++) {
            matriz1[i][j] += matriz2[i][j];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        printf("Vazia\n");

        return 0;
    }

    int m1[n][n];
    int m2[n][n];

    lermatriz(n, n, m1);
    lermatriz(n, n, m2);
    somarmatrizes(n, n, m1, m2);
    printmatriz(n, n, m1);

    return 0;
}
