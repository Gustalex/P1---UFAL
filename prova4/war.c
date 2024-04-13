#include <stdio.h>

int main() {
    int linha, col, a, x, y, d;
    scanf("%d %d", &linha, &col);
    int matriz[linha][col];
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d %d %d", &x, &y, &d);
        for (int j = x - 1; j <= x + 1; j++) {
            for (int k = y - 1; k <= y + 1; k++) {
                if (j >= 0 && j < linha && k >= 0 && k < col) {
                    if (j == x && k == y) {
                        matriz[j][k] -= d;
                    } else {
                        matriz[j][k] -= d / 2;
                    }
                }
            }
        }
    }
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < col; j++) {
                if(matriz[i][j] < 0){
                    matriz[i][j] = 0;
                }
                if(j == col -1) printf("%d\n",matriz[i][j]);
                else printf("%d ",matriz[i][j]);
                
            }
        }
    return 0;
}
