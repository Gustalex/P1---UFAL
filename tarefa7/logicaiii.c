#include <stdio.h>

int main() {
    
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (y % (x * z) == 0)
    {
        int matriz[y / (x * z)][x];

        int cont = 1;

        for (int i = 0; i < y / (x * z); i++) {
            for (int j = 0; j < x; j++) {
                matriz[i][j] = cont;
                cont += z;
            }
        }
        for (int i = 0; i < y / (x * z); i++) {
            for (int j = 0; j < x; j++) {
                if (j == x - 1)
                    printf("%d", matriz[i][j]);
                else
                    printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    } 
    else
    {

        int matriz[y / (x * z) + 1][x];

        int cont = 1;

        for (int i = 0; i < y / (x * z) + 1; i++) {
            for (int j = 0; j < x; j++) {
                if (cont <= y)
                    matriz[i][j] = cont;
                else
                    matriz[i][j] = 0;
                cont += z;
            }
        }

        for (int i = 0; i < y / (x * z) + 1; i++) {
            for (int j = 0; j < x; j++) {
                if (matriz[i][j] != 0) {
                    if (j == x - 1)
                        printf("%d", matriz[i][j]);
                    else
                        printf("%d ", matriz[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
